#include <stdio.h>
#include <math.h>

int main()
{
	int i ,test , a, b ;

	scanf("%d"  , &test);

	for (i = 0; i < test; ++i)
	{
		scanf("%d %d" , &a , &b);

		if( a & 1) 
		{
			a = a/2  ;
		}

		else a /= 2 ;

		if( b &  1 ) 
		{
			b= b/2 ;
			b++;
		}
		else b /= 2 ;

		printf("Case %d: %d\n",i+1 , (int)( pow(b , 2) - pow (a , 2)) );
	}
}