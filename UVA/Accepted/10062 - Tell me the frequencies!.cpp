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
	char input[1002] ;
	int flag = 0 ;

	while(gets(input))
	{
		if(flag) printf("\n");
		int i , array[256] , track[256];

		memset(array , 0 , sizeof(array));
		memset(track , 0 , sizeof(track));


		int max = 0 ;
		for(i = 0 ; i < strlen(input) ; i++)
		{
			array[input[i]]++;
			if( array[input[i]] > max) max = array[input[i]];
		}
		int j ;

		for(j = 1 ; j <= max ;j++)
		{
			for(i = 128 ; i >= 32 ; i--)
			{
				if(j == array[i]) printf("%d %d\n", i , j);
			}

		}		
		flag= 1;
	}

	return 0;
}
