#include <stdio.h>
#include <math.h>

int main()
{
	long long int array[500001]  , count1 =  1, n ,  i , temp = 2;
	array[1] = 1;
	array[2] = 2 ;

	for (i = 3; i <= 500000; ++i)
	{
		if(temp > i ) temp = 2;
		array[i] = temp ;
		temp += 2;
	}

	while(scanf("%lld" , &n)== 1 &&  n ) {
	    printf("%lld\n", array[n]);
	}
}