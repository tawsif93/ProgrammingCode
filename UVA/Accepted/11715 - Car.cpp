#include <stdio.h>
#include <math.h>

void one( double u , double v, double t)
{
	double a , s ;

	a = ( v- u ) / t ;

	s = u * t + .5 * a * t * t;

	printf("%.3lf %.3lf\n" , s , a );
}

void two( double u , double v, double a)
{
	double t , s ;

	t = ( v- u ) / a ;

	s = u * t + .5  * a * t * t;

	printf("%.3lf %.3lf\n" , s , t );
}

void three( double u , double a, double s )
{
	double t , v ;

	v = sqrt( u * u + 2 * a * s);

	t = ( v- u ) / a ;

	printf("%.3lf %.3lf\n" , v , t );
}

void four( double v , double a, double s )
{
	double t , u ;

	u = sqrt( v * v - 2 * a * s);

	t = ( v- u ) / a ;

	printf("%.3lf %.3lf\n" , u , t );
}

int main()
{
	int cases = 0  , settings ;
	double i1, i2 , i3 , i ;

	while(scanf("%d", &settings)== 1 && settings  && ++cases )
	{
		scanf("%lf%lf%lf", &i1 , &i2 , &i3);
		

		printf("Case %d: ", cases );

		switch(settings)
		{
			case 1 : one(i1 , i2 , i3);
					break;
			case 2 : two(i1 , i2 , i3);
					break;
			case 3 : three(i1 , i2 , i3);
					break;
			case 4 : four(i1 , i2 , i3);
					break;
		}
	}
	
	return 0 ;

}


