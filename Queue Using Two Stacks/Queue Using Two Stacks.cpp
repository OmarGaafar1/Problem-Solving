
// detailed video that will help you with this problem
// https://www.youtube.com/watch?v=AN0axYeLue0

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Queue{
private:
    stack<T> s1;
    stack<T> s2;
public:


    void enqueue(T x){
        s1.push(x);
    }

    void dequeue(){
        if(s2.empty()) {
            while(!s1.empty()) {
               s2.push(s1.top());
               s1.pop();
            }
        }
        s2.pop();
    }

    T front(){
        if(s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

};

int main()
 {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   
        int q, type, x; cin >> q;
    Queue<int> queue; 
    for(int i=0; i<q; ++i)
    {
        cin >> type;
        switch(type)
        {
            case 1:
                cin >> x;
                queue.enqueue(x);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                cout << queue.front() << "\n";
                break;
            default:
                continue;
        }
    }
}
