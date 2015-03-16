#include <stdio.h>
#include <string.h>

int main()
{
	int count;
	long long t, n;
	while(scanf("%lld", &n)==1 && n)
	{
		t = n ;
		count=0;
		int array[64];
		
		memset(array , 0 ,sizeof(array));

		int  j , flag = 0 , i = 0 ;
		
		for (j =0; n ; ++j) {
			array[i] = n % 2 ;
			i++;

			if( n % 2 == 1) count++ ;
			n /= 2;
		}
		
		printf("The parity of ");

		for(i = 63 ; i>= 0 ; i--)
		{
			if(array[i] == 1) flag = 1;
			if(flag) printf("%d", array[i]);
		}	

		printf(" is %d (mod 2).\n",  count );	
	}
	
	return 0;
}
