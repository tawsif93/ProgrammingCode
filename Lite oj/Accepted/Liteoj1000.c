#include<stdio.h>
int main()
{	
	int tst;
	scanf("%d",&tst);
	
	int i,c[tst],a[tst],b[tst];
	
	for(i=0 ; i <tst;i++){
		scanf("%d%d",&a[i],&b[i]);
		c[i]= a[i]+b[i];
		}
	for(i=0;i<tst;i++){
		printf("Case %d: %d\n",i+1,c[i]);
		}
		
	return 0 ;
	
}
