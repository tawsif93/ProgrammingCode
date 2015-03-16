#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long s , d  , first , second;
	int cases ;
	scanf("%d" , &cases) ;
	
	while(cases--) 
	{
	
		scanf("%lld%lld" , &s , &d) ;
		
		first = (s+d)/2 ;
		second = (s-d)/2 ;
		
		if((first+second) == s && abs(first-second) == d && (first >= 0 && second >= 0) ) printf("%lld %lld\n" , first , second );
		else puts("impossible");
	}
}
