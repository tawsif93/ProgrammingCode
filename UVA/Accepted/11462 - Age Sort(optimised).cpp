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
	int n ;

	while(scanf("%d" , &n)==1 && n)
	{
		int array[n+1] ;
		int a ;

		memset(array , 0 , sizeof(array));

		for (int i = 0; i < n; ++i)
		{
			scanf("%d" , &a);

			array[a]++;		
		}
		bool space = false ;

		for(int i = 1 ; i <= n ; i++)
		{

			for(int j = 0 ; j < array[i] ; j++)
			{
				if (space)
				{
					printf(" ");
				}
				printf("%d", i);

				space = true;
			}
		}
		printf("\n");
	}
	return 0;
}
