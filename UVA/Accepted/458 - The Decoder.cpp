#include <stdio.h>
#include <string.h>

int main()
{
	char s[10000];

	while(gets(s)) {
	    int i = 0 ;

	    while(s[i] != '\0') {
	        printf("%c", s[i] - 7);
	        i++;
	    }
	    printf("\n");
	}
}
