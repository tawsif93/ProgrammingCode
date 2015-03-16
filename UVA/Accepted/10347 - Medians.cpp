#include <stdio.h>
#include <math.h>

int main()
{
	double a, b , c ;

	double temp , area , temp1 ;

	while(scanf("%lf%lf%lf" , &a, &b , &c)==3) {
	    temp = ( a + b + c ) / 2.0 ;

	    temp1 = temp * (temp -a ) * (temp - b) *(temp - c) ;
	    area = (4* sqrt(temp1)) / 3.0 ;

	    if (!(area>0) ) printf("%.3lf\n" , -1.0);
	    else 
	    {
	    	printf("%.3lf\n", area);
	    }
	}

	return 0 ;
}