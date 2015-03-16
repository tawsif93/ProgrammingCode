#include <stdio.h>
#include <string.h>

#define MAX 100

unsigned long int array[MAX];

unsigned long int fib(unsigned long int n)
{

	if (n == 1 ) return 0 ;
	if(n == 2) return 1 ;
	if(array[n] != -1 ) return array[n] ;

	return array[n ] = fib(n-1) + fib(n-2) ;
}

int main()
{
	int n ;

	memset(array , -1 , sizeof(array));

	while(scanf("%d",  &n)==1 && n != -1 ) printf("%lu %lu\n", fib(n+3)-1 , fib(n+4)-1);
	return 0;
}
