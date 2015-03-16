#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <list>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{

	int m ;

	while(scanf("%d" , &m)==1 && m)
	{
		int input ;

		vector <int> track ;
		
		for(int i = 0 ; i < m ; i++)
		{
			scanf("%d", &input);
			track.push_back(input);
		}

		int lowCost = 0;

		while(track.size() > 1) {
			sort(track.begin(), track.end());

			int a = track[0];
			track.erase(track.begin()+0);
			
			int b = track[0];
			track.erase(track.begin()+0);

			track.insert(track.begin() ,a+b);

			lowCost += track[0];
		}

		printf("%d\n", lowCost);
	}

	return 0;
}
