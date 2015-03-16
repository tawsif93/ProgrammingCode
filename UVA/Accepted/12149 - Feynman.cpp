#include <stdio.h>

int main()
{
	int n , array[101];

	array[0] = 0 ;

	for( n = 0 ; n < 101 ; n++)
	{
		if(n) array[n] = array[n-1] + n * n ;
	}

	while(scanf("%d" , &n)==1 && n) {
	    printf("%d\n", array[n]);
	}

	return 0;
}