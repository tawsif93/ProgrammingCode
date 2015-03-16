#include <stdio.h>
#include <math.h>


int gcd(int a, int b)
{
	int t ;
	while (b) 
	{
		
		t = b ;

		b = a % b ;

		a = t ;
	}

	return a;
}

int main()
{
	int n  ,  i , j ;

	while(scanf("%d" , &n)==1 && n) {
	    int result = 0 ;

	    for( i = 1 ; i < n ; i++)
	    {
	    	for(j = i+1 ; j <= n ; j++)
	    	{
	    		result += gcd(i , j);
	    	}
	    }

	    printf("%d\n", result);
	}

	return 0 ;
}