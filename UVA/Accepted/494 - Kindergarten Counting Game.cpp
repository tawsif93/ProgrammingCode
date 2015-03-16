#include <stdio.h>
#include <string.h>


int main()
{
	int c , i;

	char input[1000] , *p;

	while(gets(input))
	{
		c = 0;
		
		for(i = 0; input[i] != '\0'; i++)		
		{
			if(((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) && (input[i+1] < 'a' || input[i+1] > 'z')&& (input[i+1] < 'A' || input  [i+1] > 'Z'))
			{
				c++;
			}
		}			
		printf("%d\n",c);		
	}	
}