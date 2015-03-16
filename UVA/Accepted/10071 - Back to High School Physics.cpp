#include <stdio.h>

int main()
{
	long long a , b ;

	while(scanf("%lld%lld" , &a , &b) == 2) {
	    printf("%lld\n", 2 * a*b);
	}

	return 0 ;
}