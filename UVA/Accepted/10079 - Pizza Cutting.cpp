#include <stdio.h>
int main()
{
	long long int a ;

	while(scanf("%lld" , &a)==1 && a >= 0 )
		printf("%lld\n", ((a*(a+1) / 2 ) + 1) );

	return 0 ;

}