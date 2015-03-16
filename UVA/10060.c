/*#include<stdio.h> 
int main (void) 
{ 
	int year[4],i;
	for(i=0;i<4;i++) scanf("%d",&year[i]); 
	for(i=0;i<4;i++) 
	{ 
		printf("\n"); 
		{
		if(year[i]%55==0 && year[i]%4==0) printf("This is buluculu festival year.\n");  
		if(year[i]%4==0) printf("This is leap year.\n"); 
		if(year[i]%15==0) printf("This is huluculu festival year.\n"); 
		else if(year[i]%15==0) printf("This is huluculu festival year.\n"); 
		else if(year[i]%55==0) printf("This is buluculu festival year.\n"); 
		else printf("This is an ordinary year.\n");
		printf("\n"); 

	} 
	
	return 0; 
}
*/
#include<stdio.h>
int main (void)
{
	int year;

	while((scanf("%d",&year)) !=EOF )
	{
	
			if((year % 4 == 0) &&  ( (year % 100 !=0) || (year % 400 ==0) ) )
			{		
				printf("This is leap year.\n");
				
			}
			
			if( year % 15 == 0)	printf("This is huluculu festival year.\n");
			
			else if(year % 55 == 0)	printf("This is buluculu festival year.\n");
			
			else printf("This is an ordinary year.\n");
			
			printf("\n");
		
	}

	return 0;
}
