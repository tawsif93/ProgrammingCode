#include <stdio.h>
#include <math.h>

int main()
{
	int a , b , i ;

	while(scanf("%d%d" , &a , &b)==2 ) {
		if( !a && !b ) break ;

	    printf("%d\n", (sqrt(a)==(int)sqrt(a)) ?((int)sqrt(b) - (int)sqrt(a))+1 : ((int)sqrt(b) - (int)sqrt(a)));
	}

	return 0;
}