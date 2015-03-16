#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 2000

int p[MAX];

void SeiveMthod()
{
	int i , j ;

	p[0]= p[1] = 1 ;

	for ( i = 4; i < MAX; i += 2)
	{
		p[i] = 1 ;
	}

	int sq = sqrt(MAX) ;

	for ( i = 3; i < sq ; i += 2)
	{
		if(p[i]) continue;
		
		else 
		{
			for( j = i * i ; j < MAX ; j+=  2 * i)
			{
				p[j] = 1 ;
			}
		}
	}
	
}

int main()
{
	int cases , i ;

	char input[2005] ; 
	scanf("%d" , &cases);
	getchar();

	SeiveMthod();

	for( i =0 ; i < cases ; i++)
	{
		int j , flag , array[128] ;
		memset( array , 0 , sizeof(array));

		scanf("%s" , input);

		for(j = 0 ; j < strlen(input) ; j++)
		{
			array[input[j]]++;
		}

		printf("Case %d: ", i+1 );
		flag = 0 ;
		for( j = '0' ; j <= 'z' ; j++)
		{
			if(!p[array[j]])
			{
				flag = 1 ;
				printf("%c", (char)j );
			}
		}
		if(!flag) printf("empty");
		printf("\n");
	}

	return 0 ;
}