#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int cases ;
	scanf("%d" , &cases);
	getchar();

	char input[202];

	while(cases--)
	{
		int i , max = 0 ;
		int array[129] ;
		gets(input);
		
		memset(array , 0 , sizeof(array));

		for(i = 0 ; i < strlen(input) ;i++)
		{
			if((input[i] >= 'a' && input[i] <='z') )
			{
				array[input[i]]++;
				if(array[input[i]] > max) max = array[input[i]];
			}
			else if ((input[i] >= 'A' && input[i] <= 'Z')) 
			{
				array[input[i]+32]++;
				if(array[input[i]+32] > max) max = array[input[i]+32];				
			}
		}

		for(i= 0; i < 129 ;i++)
		{
			if(array[i] == max) printf("%c", i);
		}

		printf("\n");
	}
}