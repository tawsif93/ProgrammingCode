#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	char name1[26] , name2[26];

	while(gets(name1) && gets(name2))
	{	
		
		
		int i , count1 = 0 , count2 = 0 ;

		for(i = 0; i < strlen(name1) ; i++) 
		{
			if(name1[i] >= 'a' && name1[i] <= 'z') count1 += name1[i]-'a' + 1;
			else if(name1[i] >= 'A' && name1[i] <= 'Z') count1 += name1[i]-'A' + 1;
		}

		for(i = 0; i < strlen(name2) ; i++) 
		{
			if(name2[i] >= 'a' && name2[i] <= 'z') count2 += name2[i]-'a' + 1;
			else if(name2[i] >= 'A' && name2[i] <= 'Z') count2 += name2[i]-'A' + 1;
		}
		
		do
		{

			sprintf(name2 , "%d" , count2);

			count2 = 0 ;
			
			for(i = 0; i < strlen(name2) ; i++) 
			{
				count2 += name2[i]- '0';
			}
			sprintf(name2 , "%d" , count2);
		} while(strlen(name2) != 1);

		do
		{
			sprintf(name1 , "%d" , count1);
			count1 = 0 ;
			for(i = 0; i < strlen(name1) ; i++) 
			{
				count1 += name1[i] - '0';
			}
			sprintf(name1 , "%d" , count1);
		} while(strlen(name1) != 1);

		double percent;
		if (count1 > count2 )
		{
			percent = 100 * (double)count2 / (double)count1 ;
		}

		else percent = 100 * (double)count1 / (double)count2 ;

		printf("%.2lf %\n", percent);
	}
}