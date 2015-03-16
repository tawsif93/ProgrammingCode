#include <stdio.h>
#include <math.h>

int main()
{
	int i , cases ;
	scanf("%d" , &cases);

	for(i = 0  ; i < cases ; i++)
	{
		double d , v , u ;

		scanf("%lf%lf%lf" , &d , &v , &u);

		if( u <= v || v== 0 || u == 0) printf("Case %d: can't determine\n" , i+1);
		else printf("Case %d: %.3lf\n",i+1 , (d / sqrt(u*u -v*v))- d/u );
	}
}