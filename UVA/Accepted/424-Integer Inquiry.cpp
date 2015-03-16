#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input[101]  , add[1000];

	int i , j , hand = 0 ;

	memset(add , '0' , sizeof(add));
	add[999] = '\0' ;

	while(scanf("%s" , input)  )
	{
		if( strcmp(input , "0" ) == 0 )break ;

		for( i = sizeof(add)-2  , j = strlen(input)-1 ; i>= 0  && strlen(input) > 0; i-- , j--)
		{
			if( j >=0 )
			{
				char temp = (( hand + add[i] + input[j] - 2 * '0') % 10) + '0' ;
				hand = (add[i]+input[j] + hand- 2 * '0') / 10 ;
				add[i] = temp ;

			}

			else if ( j < 0 && hand != 0)
			{
				char temp = (( hand + add[i] - '0') % 10) + '0' ;
				hand = (hand + add[i] - '0') / 10 ;
				add[i] = temp;

			}
		}
	}
	
	j= 0;

	for(i = 0 ; i < strlen(add) ; i++ )
	{
		if(add[i] != '0' && j==0) j=1 ;
		if(j== 1) printf("%c", add[i]);
	}

	printf("\n");

	return 0 ;
}