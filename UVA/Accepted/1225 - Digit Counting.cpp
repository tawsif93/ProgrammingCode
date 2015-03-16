#include <stdio.h>
#include <string.h>



int main()
{
	int cases;
	
	int i , j ,input = 10000, track[10001][10] ;
	
	char temp[20];

	memset(track  , 0 , sizeof(track) );

	

	for(i = 1 ; i <= input ; i++)
	{
		sprintf(temp , "%d" , i);

		if(i > 0 )
		{
			for(j= 0 ; j < 10 ; j++)
			{
				track[i][j]= track[i-1][j];
			}
		}

		for( j = 0 ; j < strlen(temp) ; j++)
		{
			track[i][temp[j]-'0']++ ;
		}
	}
	

	scanf("%d", &cases);

	while(cases--)
	{
		scanf("%d"  , &input);

		for(i = 0 ; i < 10 ; i++)
		{
			if(i)
			{
				printf(" ");
			}

			printf("%d", track[input][i]);
		}
		printf("\n");
	}
}