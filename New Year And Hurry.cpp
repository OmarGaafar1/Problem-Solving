/*

   _____                      ______        _____
  / ____|    /\        /\    |  ____ /\    |  __ \
 | |  __    /  \      /  \   | |__  /  \   | |__) |
 | | |_ |  / /\ \    / /\ \  |  __ / /\ \  |  _  /
 | |__| | / ____ \  / ____ \ | |  / ____ \ | | \ \
  \_____|/_/    \_\/_/    \_\|_| /_/    \_\|_|  \_\

*/


// Link  https://codeforces.com/contest/750/problem/A
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
    int n , k;
    cin >> n >> k;
	int reminder = 240 - k;
	
	int problems = 0;
	for (int i = 1; i <= n ; i++)
	{
	
		if (reminder >= i *5)
		{
			reminder -= (i * 5);
			problems++;
		}
	}
	cout << problems << endl;
   
}