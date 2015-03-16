#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int hour , min ;
	char colon ;

	while(scanf("%d%c%d" , &hour  , &colon , &min))
	{
		
		if( !hour && !min) break ;

		printf("%.3lf\n",  ((((hour * 30 ) + ( min * .5) - (min * 6)) < 0 ? -1 *((hour * 30 ) + ( min * .5) - (min * 6)) : ((hour * 30 ) + ( min * .5) - (min * 6))) > 180 ? 360 -(((hour * 30 ) + ( min * .5) - (min * 6)) < 0 ? -1 *((hour * 30 ) + ( min * .5) - (min * 6)) : ((hour * 30 ) + ( min * .5) - (min * 6))) : (((hour * 30 ) + ( min * .5) - (min * 6)) < 0 ? -1 *((hour * 30 ) + ( min * .5) - (min * 6)) : ((hour * 30 ) + ( min * .5) - (min * 6)))) );
	}
}