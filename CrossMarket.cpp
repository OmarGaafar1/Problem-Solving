/*

   _____                      ______        _____
  / ____|    /\        /\    |  ____ /\    |  __ \
 | |  __    /  \      /  \   | |__  /  \   | |__) |
 | | |_ |  / /\ \    / /\ \  |  __ / /\ \  |  _  /
 | |__| | / ____ \  / ____ \ | |  / ____ \ | | \ \
  \_____|/_/    \_\/_/    \_\|_| /_/    \_\|_|  \_\

*/


// Link  https://codeforces.com/contest/1715/problem/A
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
		int n , m;
		cin >> n >> m ;
		if (n == m && m == 1)
		{
			cout << 0 << endl;
			continue;
		}
		if (n > m )
		{
			cout << m - 1 + m + n - 1 << endl;
		}
		else 
		{
			cout << n - 1 + n + m - 1 << endl;
		}
		
	}
}
