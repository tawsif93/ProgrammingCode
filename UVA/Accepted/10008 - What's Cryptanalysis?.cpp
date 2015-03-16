#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int cases; 
	scanf("%d" , &cases);
	getchar();
	char input[1000];

	int  i , track[26] , max = 0 ;

	memset(track , 0 , sizeof(track));
	
	while(cases && gets(input) ) {
	    
	    for(i = 0 ; i < strlen(input) ; i++)
	    {
	    	char ch = toupper(input[i]);

	    	if(ch >= 'A' && ch <= 'Z') 
	    	{
	    		track[ch-'A']++;

	    		if(track[ch-'A'] > max) max = track[ch-'A'] ;
	    	}
	    }

	    cases--;
	}	

	while(max)
	{    
    	for(i = 0 ; i < 26 ; i++)
    	{
    		if(track[i] == max ) printf("%c %d\n", i+'A' , track[i]);
    	}

    	max--;
    
	}

	return 0 ;
}