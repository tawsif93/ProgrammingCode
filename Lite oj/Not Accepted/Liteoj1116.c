#include<stdio.h>
int main()

{
	unsigned long  w;
	int m=0,i,n=0,t=1,min;
	int num;
	scanf("%d",&num);
	
	for(i=2;i<=num;i++){
            if(num%i==0) {
            	if(i % 2 == 0) {
            		min = i;
            		if(m<min){
	            		min = m;
	            		}
            	if(i % 2 != 0) n= i;
            	}
            w = m * n ;
            
            	t++;
            }
       }
       if (w== 0 ) printf("Impossible\n");
       else printf("Case %d : %d %d ",t ,n , m);
            	
	return 0;
}
