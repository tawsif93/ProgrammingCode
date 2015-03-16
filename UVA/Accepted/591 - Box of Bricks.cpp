 #include <stdio.h>

int main()
{
	int n , set = 0  , d[50];

	while(scanf("%d", &n) == 1 && n) {
	    int i , brick , total = 0 , count = 0 ;
	    set++;

	    for ( i = 0; i < n; ++i)
	    {
	    	scanf("%d" , &d[i] ) ;
	    	
	    	total += d[i] ;
	    }

	    brick = total / n;

	    for ( i = 0; i < n; ++i)
	    {
	    	if(d[i] > brick ) 
	    	{
	    		count += ( d[i] -  brick) ;
	    	}
	    }
	    printf("Set #%d\n", set );
	    printf("The minimum number of moves is %d.\n\n", count);
	}
}