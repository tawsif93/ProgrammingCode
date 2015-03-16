#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	int i , cases , j;
	char input[15] , save[15];
	long long count;

	scanf("%d" , &cases);

	for(i = 0 ; i < cases ; i++)
	{
		scanf("%s" ,input);

		strcpy(save , input);

		while(1)
		{
			count= 0;

			for(j = 0 ; j < strlen(input) ; j++)
			{
				count += ((input[j]-'0') * (input[j]-'0')) ;
			}
			if(count <= 9 ) break ;

			sprintf(input , "%lld" , count);
		}
		
		if( count == 1 ) 
		{
			printf("Case #%d: %s is a Happy number.\n",i+1 , save );
		}

		else 
		{
			printf("Case #%d: %s is an Unhappy number.\n",i+1 , save );
		}
	}
	return 0 ;
}