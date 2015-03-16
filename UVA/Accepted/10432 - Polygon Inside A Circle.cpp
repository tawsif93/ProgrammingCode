#include <stdio.h>
#include <math.h>

#define pi 2*acos(0.0)

int main()
{
	int  b ;
	double a ;

	while(scanf("%lf%d" , &a , &b )!= EOF) {
		double angle = 2 * pi / (double)b ;

	    printf("%.3lf\n",(double)b * 0.5 * a *  a * sin(angle));
	}

	return 0 ;

}