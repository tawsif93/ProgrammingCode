#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char first[15] , second[15] ;
	int count , i , carry ; 

	while( scanf("%s%s" ,first , second) )
	{
		if (!atoi(first) && !atoi(second) ) break;

		count = 0 ;
		carry = 0 ;

		if(strlen(first) >= strlen(second))
		{
			int j = strlen(first)-1;

			for(i = strlen(second)-1 ; i >= 0 ; i--)
			{
				if(((first[j]) + (second[i]) + carry - 2 * '0') > 9 ) 
				{
					carry = 1 ;
					count++ ;
				}
				else carry= 0 ;

				j-- ;
			}

			if( ( strlen(first) - strlen(second) ) > 0 ) 
			{
				for(i = strlen(first) - strlen(second) - 1 ; i >= 0 ; i--)
				{
					if((first[i] +carry - '0' ) > 9) 
					{
						carry = 1 ;
						count++ ;
					}

					else carry = 0;
				}
			}

		}

		else 
		{
			int j = strlen(second)-1;

			for(i = strlen(first)-1 ; i >= 0 ; i--)
			{
				if(((first[i]) + (second[j]) + carry - 2 * '0') > 9 ) 
				{
					carry = ((first[i]) + (second[j]) + carry - 2 * '0') /10 ;
					count++ ;
				}
				else carry= 0 ;

				j--;
			}

			for(i = strlen(second) - strlen(first) - 1 ; i >= 0 ; i--)
			{
				if((second[i] +carry - '0' ) > 9) 
				{
					carry = 1 ;
					count++ ;
				}

				else carry = 0;
			}
	
		}

		if ( !count ) printf("No carry operation.\n");
		else if( count == 1 ) printf("1 carry operation.\n" );
		else printf("%d carry operations.\n", count );
	}
}