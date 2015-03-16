#include<stdio.h>
int main()
{	
	int tst;
	scanf("%d",&tst);
	
	int i,j,x1[tst],x2[tst],y1[tst],y2[tst],M;
	
	for(i=0;i<tst;i++){
		scanf("%d%d%d%d",&x1[i],&y1[i],&x2[i],&y2[i]);
		scanf("%d",&M);
		int x[M],y[M];
		for(j=0;j<M;j++){
			scanf("%d%d",&x[j],&y[j]);
			}
			printf("Case %d:\n",i+1);
		for(j=0;j<M;j++){
			if(x[j]>=x1[i] && x[j]<=x2[i] && y[j]>=y1[i] && y[j]<=y2[i]) printf("Yes\n");
			else printf("No\n");
		}
	}
	
	return 0;
}
