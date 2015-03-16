#include <stdio.h>

int main()
{
	int h , d , f  , i;
	double fatigue , u , current;

	while((scanf("%d%lf%d%d", &h , &u , &d , &f)) == 4 && h) {
	    fatigue = u * (double)f/100 ;
	    current = 0 ;
	    for (i = 1; ; ++i)
	    {
			current = current + u ;
			

			u -= fatigue ;
			if(u < 0.0) u= 0;

			if(current > (double )h ) 
			{
				printf("success on day %d\n", i);
				break ;
			}

			current -= d ;
			if( current < 0.0)
			{
				printf("failure on day %d\n" , i);
				break ;
			}

			
	    }
	}

}