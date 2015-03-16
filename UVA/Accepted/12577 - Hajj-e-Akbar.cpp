#include <stdio.h>
#include <string.h>

int main()
{
	int cases = 0 ;
	char input[100] ;

	while(gets(input) )
	{
		if(strcmp(input , "*") == 0) break ;
		cases++;

		if(strcmp(input , "Hajj")== 0 ) printf("Case %d: Hajj-e-Akbar\n", cases);
		else printf("Case %d: Hajj-e-Asghar\n",cases );
	}

	return 0 ;
}