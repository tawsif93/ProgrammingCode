#include <stdio.h>

int main()
{
	long long int  a , b ,c ;

	while(scanf("%lld%lld%lld" , &a , &b , &c)==3) {
		if(!a && !b && !c) break ;

		if((a*a + b*b) == c*c) printf("%s\n", "right");
		else if((a*a + c * c) == b*b) printf("%s\n", "right");
		else if((c*c + b*b) == a*a) printf("%s\n", "right");
		else printf("%s\n", "wrong");
	}

	return 0;
}