#include <stdio.h>
#include <string.h>


int main()
{
	char string[61] ; 

	while(scanf("%s" , string) && string[0] != '#' ) {

		int flag = 0 , k ,i , j;

		for (i = strlen(string) - 2 ; i >= 0; --i)
		{
			if( string[i+1] > string[i])
			{
				char ch ;
				
				ch = string[i+1];
				k = i+1;
				for(j = i+1 ; j < strlen(string) ;j++)
				{
					if(string[i] < string[j] && string[j] < ch) 
					{
						ch = string[j];

						k = j ;
					}
				}

				string[k] = string[k] ^ string[i] ;
				string[i] = string[k] ^ string[i] ;
				string[k] = string[k] ^ string[i] ;
//				std::sort(string+i+1 , string+strlen(string));

				for (k = i+1; k < strlen(string); k++)
				{
					for(j= k+1 ; j < strlen(string) ;j++)
					{
						if(string[j] < string[k]) 
						{
							string[k] = string[k] ^ string[j] ;
							string[j] = string[k] ^ string[j] ;
							string[k] = string[k] ^ string[j] ;
						}
					}
				}

				flag = 1 ;
				break;
			}
		}

		if(flag) 
		{
			puts(string);
		}
		else printf("No Successor\n");
	}
}
