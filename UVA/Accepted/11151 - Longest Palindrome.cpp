#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a , int b )
{
	return (a>b)? a : b;
}


int lps(char *a  ,char*b)
{
	int i  , j ;
	int aLength = strlen(a);
	int bLength = strlen(b) ;


	int l[aLength+1][bLength+1] ;

	for (i = 0; i <= aLength; ++i)
	{
		for(j = 0 ; j <= bLength ; j++)
		{
			if(i== 0 || j== 0 ) l[i][j] = 0 ;

			else if( a[i-1] == b[j-1] ) l[i][j] = l[i-1][j-1] + 1 ;

			else l[i][j] = max(l[i-1][j] , l[i][j-1]) ;
		}
	}
	
	return l[aLength][bLength];
}

void reverse(char *a , char *b)
{
	int i  , j = 0;
	for(i = strlen(a)-1 ; i >= 0 ;i--)
	{
		b[j] = a[i] ;
		j++ ;
	}
	b[strlen(a)] = '\0' ;
}

int main()
{
	char input[1001]  ;

	int cases  , i ;

	scanf("%d" , &cases);
	getchar();

	while(cases--)
	{
		char rev[1001] = "" ;

		gets(input) ;
		
		strcat(rev , input);

		reverse(input , rev);
		
		printf("%d\n" , lps(input , rev));
	}
}