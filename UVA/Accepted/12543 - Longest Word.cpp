#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char input[103] , save[103];
	int maximum = 0 ;

	while(scanf("%s" , input)) {

		if(strcmp(input , "E-N-D")==0 ) break;
		
		int i, k , j = 0 , dotCount = 0 , mainSize = strlen(input);

		for(i = 0 ; i < strlen(input) ; i++)
		{
			if(!((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z') || input[i]=='-')) mainSize--;
			
			input[i] = tolower(input[i]);
			
			if(!((input[i] >= 'a' && input[i] <= 'z') || input[i]=='-') ) 
			{
				dotCount++;

				input[i] = ' ';
			}
		}

		if(dotCount)
		{
			char temp[dotCount+1][103];

			for(i = 0 ; i < dotCount+1 ; i++)
			{
				k = 0;
				for(j  ; j < strlen(input) ; j++)
				{
					if(j+1 == strlen(input)){
						
						temp[i][k] = input[j] ;
						k++ ;
						temp[i][k] = '\0';
						break;
					}

					if( input[j] == ' ' )
					{
						temp[i][k] = '\0' ;
						j++;
						break ;
					}

					temp[i][k] = input[j];
					k++;
				}
			}
			for(i = 0 ; i < dotCount+1 ; i++)
			{
				if(strlen(temp[i]) > maximum) 
				{
					strcpy(save , temp[i]);
					maximum = strlen(temp[i]);
				}
			}

		
		}

		else if(mainSize > maximum)
		{
			strcpy(save , input);
			maximum = mainSize ;
		}
	}

	printf("%s\n", save);


	return 0;
}
	