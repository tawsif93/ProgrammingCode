#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 1000005

int  prime[MAX] ;

void seive()
{
	int i  , j ;
	prime[0] = 1;
	prime[1] = 1 ;

	for(i = 4 ; i < MAX ; i+= 2)
	{
		prime[i] = 1 ;
	}
	
	int sq = sqrt(MAX);

	for(i = 3 ; i < sq ; i+= 2)
	{
		if(prime[i])continue;

		else 
		{
			for(j = i * i  ; j < MAX ; j += 2 * i )
			{
				prime[j] = 1 ;
			}
		}
	}
}

int main()
{
	long long int input , temp ;
	char cTemp[20] , rTemp[20];
	seive();

	while(scanf("%lld" , & input)==1) {
	    sprintf(cTemp , "%lld" , input);

	    int i ;
	    
	    for(temp = strlen(cTemp)-1 , i= 0 ; temp >= 0 ; temp-- , i++ )
	    {
	    	rTemp[i] = cTemp[temp] ;
	    }

	    rTemp[i] = '\0' ;

	    sscanf(rTemp , "%lld" , &temp);

	    if( prime[input] ) printf("%lld is not prime.\n",input );
	    else if( (!prime[input]  && prime[temp]) || (!prime[input] && input==temp)) printf("%lld is prime.\n", input);
	    else if(!prime[temp]) printf("%lld is emirp.\n",input );
	}

	return 0 ;
}