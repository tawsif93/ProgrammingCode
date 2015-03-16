#include <stdio.h>

int main()
{
	int cases ;
	scanf("%d" , &cases);

	while(cases--) {
	    int a , b , c  , flag = 0 ;
	    scanf("%d%d%d" , &a , &b , &c) ;
	    if( ((a+b) > c) ) flag = 1 ;
	    if(flag) printf("OK\n");
	    else printf("Wrong!!\n"); 
	}
}