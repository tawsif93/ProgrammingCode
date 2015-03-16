#include <stdio.h>
#include <math.h>

#define pi 2*acos(0.0)

int main()
{
	int cases;
	scanf("%d" , &cases);
	while(cases--)
	{
		double r ;

		scanf("%lf" , &r);
		r /= 5.0 ;

		printf("%.2lf %.2lf\n" , pi * r * r ,  r * 5 * 3 * r  - pi * r * r);
	}
}