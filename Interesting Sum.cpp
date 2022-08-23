/*

   _____                      ______        _____
  / ____|    /\        /\    |  ____ /\    |  __ \
 | |  __    /  \      /  \   | |__  /  \   | |__) |
 | | |_ |  / /\ \    / /\ \  |  __ / /\ \  |  _  /
 | |__| | / ____ \  / ____ \ | |  / ____ \ | | \ \
  \_____|/_/    \_\/_/    \_\|_| /_/    \_\|_|  \_\

*/


// Link  https://codeforces.com/problemset/problem/1720/B
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>
#include <set>
#include <cmath>
#include <queue>
#include<unordered_map>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> numb(n);
	
		priority_queue<int> max;
		priority_queue<int , vector<int> , greater<> > min;
		for (int i = 0; i < n; i++)
		{
			cin >> numb[i];
			max.push(numb[i]);
			min.push(numb[i]);

		}
		int one = max.top(); max.pop();
		int two = max.top(); max.pop();
		int three = min.top(); min.pop();
		int four = min.top(); 
		cout << one + two - three - four << endl;
		
	}
}
