/*

   _____                      ______        _____
  / ____|    /\        /\    |  ____ /\    |  __ \
 | |  __    /  \      /  \   | |__  /  \   | |__) |
 | | |_ |  / /\ \    / /\ \  |  __ / /\ \  |  _  /
 | |__| | / ____ \  / ____ \ | |  / ____ \ | | \ \
  \_____|/_/    \_\/_/    \_\|_| /_/    \_\|_|  \_\

*/


#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>
#include <set>
#include <cmath>
#include <queue>
#include <list>
#include<unordered_map>
using namespace std;

int main()
{

	int t; cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<vector<int>> board(n, vector<int>(m));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				char x;
				cin >> x;
				board[i][j] = x - '0';
			}

		}
		bool found = false;
		int one_counter = 0;
		int counter = 5;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				one_counter += board[i][j];
				if (i != n - 1 && j != m - 1)
				{

					int ones = 0;
					ones += board[i][j];

					ones += board[i + 1][j];
					ones += board[i][j + 1];
					ones += board[i + 1][j + 1];
					if (ones <= 2)
					{
						found = true;
					}
					else
					{
						counter = min(counter, ones);
					}
				}

			}
		}
		if (found)
		{
			cout << one_counter << endl;
		}
		else
		{
			if (counter == 3)
			{
				cout << one_counter - 1 << endl;
			}
			else
			{
				cout << one_counter - 2 << endl;
			}
		}
	}
}


