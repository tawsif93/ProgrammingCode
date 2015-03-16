#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a , b , frward , backward ;

	while(scanf("%d%d", &a , &b)==2) {
	    if(a == -1 && b== -1 ) break ;

	    frward = abs(b-a) ;
	    backward = 100 -frward ;

	    printf("%d\n", ((frward< backward)? frward : backward));
	}

	return 0 ;
}