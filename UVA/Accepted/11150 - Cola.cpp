#include <stdio.h>

int main()
{
	int n , k = 3 ;

	while(scanf("%d" , &n )==1){
		n++;
		int a = n + ((n-1) /(k-1));


	    printf("%d\n", a - 1);
	}

	return 0;
}