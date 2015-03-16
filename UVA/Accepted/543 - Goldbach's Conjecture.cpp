#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 1000005

int p[MAX] ;

void seive()
{
	int i , j , sq = (int)sqrt(MAX) ;

	p[0] = 1 ;
	p[1] = 1;

	for (i = 4; i < MAX; i += 2)
	{
		p[i] = 1 ;
	}

	for(i = 3 ; i < sq ; i +=2 )
	{
		if(p[i]) continue;
		else 
		{
			for( j = i * i ; j < MAX ; j += 2 * i)
			{
				p[j] = 1 ;
			}
		}
	}
}

int main()
{

	int i , input , j;
	seive();

	while(scanf("%d" , &input)==1 && input) {
	    int flag = 0 ;

	    for(j = 2 ; j < input-1 ; j++)
	    {
	    	if( !p[j] && !p[input-j])
	    	{
	    		printf("%d = %d + %d\n", input , j , input-j);
	    		flag = 1 ;
	    		break;
	    	}
	    }

	    if(!flag) printf("Goldbach's conjecture is wrong.\n");
	}
}
