#include<stdio.h>
int main()
{	
	int d,temp;
	int i,c,j,max;
	
	int a,b,e,f;
	
	while((scanf("%d%d",&a,&b))==2){
		if(a>b){
			e=a;
			f=b;
		}
		else {
			e=b;
			f=a;
		}
		
		max=0;
		for(i= f;i<=e;i++){
			d =i;
			c=1;
			for(;;){
				if(d==1) break;
				if(d%2==0) d= d/2;
				else d = 3*d+1;
				c++;
				}
			if(c>max) max = c;
		}
	
		printf("%d %d %d\n",a,b,max);
	}
	return 0;
}
