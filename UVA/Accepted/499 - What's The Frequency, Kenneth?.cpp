#include <stdio.h>
#include <string.h>

int main()
{
	char input[1000];

	while(gets(input)) {
		int max = 0 , i , array['z'+1] ;
		memset(array , 0 , sizeof(array));

		for(i = 0 ; i < strlen(input) ; i++)
		{
			if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z') )
			{
				array[input[i]]++;
				if(array[input[i]] > max ) max = array[input[i]];
			}
		}

		for(i = 'A' ; i <= 'z' ; i++)
		{

			if(max == array[i] && strlen(input) ) printf("%c", i );
		}
		printf(" %d\n", max);
	}

	return 0 ;
}
