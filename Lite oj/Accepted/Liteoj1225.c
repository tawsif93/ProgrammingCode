#include<stdio.h>
int main()
{
	long int  multiply,temp, reverse ;
	
	int Case,i;
	scanf("%d",&Case);
	
	long int input[Case];
	
	for(i=0;i<Case;i++)scanf("%ld",&input[i]);
	
	for(i=0;i<Case;i++){
			multiply = input[i];
			reverse = 0;
			temp = multiply;

			while (temp != 0)
			{
				reverse = reverse * 10;
				reverse = reverse + temp % 10;
				temp = temp / 10;
			}
			if (multiply == reverse){
				printf("Case %d: Yes\n", i+1);
			}
			else printf("Case %d: No\n",i+1);			
	}
	
	
	return 0;
}
