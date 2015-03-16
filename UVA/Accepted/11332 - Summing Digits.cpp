#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char input[15];

	while(scanf("%s" , input)) {
		
		if(strlen(input) == 1 && input[0] == '0') break ;


		while(strlen(input) != 1)
		{	
			int i ,track = 0  ;
			for(i = 0 ; i < strlen(input) ; i++ )
			{
				track += input[i] - '0' ;
			}

			sprintf(input , "%d" , track);
		}

		printf("%s\n", input);

	}
}