/********************/
/* Edited by Tawsif */
/********************/

#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iterator>
#include <cctype>

using namespace std;

int main (int argc, char const* argv[])
{

	int t ,count ;
	string x;
	string y,hudai;

	cin >> t ;
	getline(cin, hudai);

	for (unsigned int i = 0; i < t; i += 1)
	{
		cin >> x >> y;
		count = 0 ;
		int m = x.length();
		int n = y.length();
		int c[m+1][n+1];

		for (unsigned int j = 1; j <= m ;j += 1)
		{
			c[j][0] = 0;
		}
		for (unsigned int j = 0; j <= n; j += 1)
		{
			c[0][j] = 0;
		}

		for(int k = 1 ; k <= m ; k++ ) {
			for ( int j = 1 ; j <= n ; j++ ) {
				if (x[k-1]== y[j-1])
				{
					c[k][j] = c[k-1][j-1] + 1;
				}
				else if (c[k-1][j] >= c[k][j-1])
				{
					c[k][j] = c[k-1][j];
				}

				else c[k][j] = c[k][j-1];
				cout << c[k][j] << " " ;
			}
			cout << endl ;
		}

		count = c[m][n]  ;

		cout << "Case " << i+1 << ": " << count  % 1000007<< endl;
	}

	return 0;
}
