#include<stdio.h>
int main()
{
	
	int a ,t, b, c;
	
	scanf("%d",&t);
	
	for ( t ; t; t--) {
		scanf("%d",&a);
		b=a/2;
		c= a-b;
		printf("%d %d\n",b,c);
	}
	
	return 0;
}
