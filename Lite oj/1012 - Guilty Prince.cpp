#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <string>

using namespace std;

struct data 
{
	char s;
	int color ;
};


int main(int argc, char const *argv[])
{
	int w, h , land , cases ;
	
	string hudai ;

	cin >> cases ;

	while(cases--)
	{
		cin >> w >> h ;
		
		getline(cin , hudai);

		data grid [h][w] ;

		for(int i = 0 ; i < h ; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> grid[i][j].s ;
				grid[i][j].color = 0 ;
			}
		}

		for(int i = 0 ; i < h ; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cout <<  grid[i][j].s ;
				
			}
			cout << endl;
		}
			cout << endl;


	}
	return 0;
}
