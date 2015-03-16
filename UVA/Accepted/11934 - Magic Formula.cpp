#include <stdio.h>
int main()
{
	int sum , a, b, c ,d ,l ;

	while(scanf("%d%d%d%d%d" , &a ,&b , &c , &d , &l)==5) {
	    if(!a && !b && !c && !d && !l) break ;

	    int i ,count = 0 ;

	    for(i = 0 ; i <= l ;i++)
	    {
	    	sum = a * i * i + b * i + c ;

	    	if(sum % d == 0) count++ ; 
	    }
	    printf("%d\n", count);
	}
}