#include <stdio.h>

int main()
{
	int cases , players , start , rounds , i , j ;

	scanf("%d" , &cases);

	for(i = 0 ; i < cases; i++)
	{
		scanf("%d%d%d" , &players  , &start , &rounds);

		int current = start;

		for(j= 0 ; j < rounds ; j++)
		{
			current++;

			if(current > players) current = 1 ;
		}

		printf("Case %d: %d\n", i+1  , current);
	}
}