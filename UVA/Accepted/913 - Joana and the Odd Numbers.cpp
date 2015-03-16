#include <stdio.h>

int main()
{
	long long int n , save ;

	while(scanf("%lld" , &n)==1) {
	    save = n * ( n/2 + 1) + ( n/2 + 1) - 1 ;

	    printf("%lld\n", save+save-2+save-4);
	}

	return 0 ;

}