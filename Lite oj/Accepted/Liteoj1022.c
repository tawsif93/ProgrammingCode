#include<stdio.h>
#include<math.h>
int main()
{
	double b,c,d;
	int t,a;
	scanf("%d",&t);
	
	for (a=1;a<=t; a++) {
		scanf("%lf",&b);
		c = b*b*4- 2*acos(0.0) * b*b;
		printf("Case %d: %.2lf\n",a,c);
	}

	return 0;
}
