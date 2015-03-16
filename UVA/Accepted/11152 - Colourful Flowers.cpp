#include <stdio.h>
#include <math.h>



int main()
{
	double a , b, c , Lcircle , Scircle , triangle ;
	
	double const pi = 2 * acos(0.0);

	while(scanf("%lf%lf%lf" , &a , &b , &c)==3)
	{
		double s = (a + b + c) / 2 ;

		triangle = sqrt( s * (s-a) * ( s-b) * ( s - c));

		Scircle = pi * (triangle / s) * (triangle / s) ;

		Lcircle = pi * a * a * b * b * c * c /( 16 * s * (s - a ) * (s-b) * (s - c)) ;

		printf("%.4lf %.4lf %.4lf\n", Lcircle - triangle , triangle  - Scircle , Scircle);

	}

	return 0 ;
}