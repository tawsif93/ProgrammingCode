#include <stdio.h>
#include <string.h>
#include <math.h>

int  prime[1050] ;

void seive()
{
	int i  , j ;
	prime[0] = 1;
	prime[1] = 0 ;

	for(i = 4 ; i < 1050 ; i+= 2)
	{
		prime[i] = 1 ;
	}
	
	int sq = sqrt(1050);

	for(i = 3 ; i < sq ; i+= 2)
	{
		if(prime[i])continue;

		else 
		{
			for(j = i * i  ; j < 1050 ; j += 2 * i )
			{
				prime[j] = 1 ;
			}
		}
	}
}


int main()
{
	char input[25];
	int i ,count;
	seive();

	while(gets(input)) {
		count = 0;

	    for(i = 0 ; i < strlen(input) ; i++)
	    {
	    	if(input[i] >= 'A' && input[i] <= 'Z') count +=  (input[i] - 'A' + 27) ;
	    	else if(input[i] >= 'a' && input[i] <= 'z') count += (input[i] - 'a' + 1) ;
	    }

	    if(!prime[count]) printf("It is a prime word.\n");
	    else printf("It is not a prime word.\n");
	}

	return 0 ;
}