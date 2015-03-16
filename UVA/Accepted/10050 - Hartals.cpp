#include <stdio.h>

int main()
{
	int cases;
	scanf("%d", &cases );

	while(cases--) {
	    int i , j , n ,p ,count  = 0;

	    scanf("%d%d" , &n , &p);
	    int h[p] , day[n+1];

	    for (i = 0; i < n+1; ++i)
	    {
	    	day[i] = 0 ;
	    }

	    for ( i = 0; i < p; ++i)
	    {
	    	scanf("%d" , &h[i] ) ;
	    }

	    for ( i = 0; i < p; ++i)
	    {
	    	for ( j = 1; j <= n; ++j)
	    	{
	    		if(j % h[i] == 0 &&  (j + 1) % 7 != 0 && day[j] != 1 && j % 7 != 0   )
	    		{	
	    			day[j] = 1;
	    			count++ ;
	    		}
	    	}
	    }

	    printf("%d\n", count);
	}
}