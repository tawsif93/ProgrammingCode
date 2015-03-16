#include <stdio.h>

int main()
{
	int n , k ;

	while(scanf("%d %d" , &n , &k)==2){

		int a = n + ((n-1) /(k-1));


	    printf("%d\n", a);
	}

	return 0;
}