#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a , int b )
{
	return (a>b)? a : b;
}


int compare (const void * a, const void * b)
{
  return ( *(char*)a - *(char*)b );
}



void lcs(char *a , char *b)
{
	int aLength = strlen(a)  , bLength = strlen(b);

	qsort(a , aLength , sizeof(char) , compare);
	qsort(b , bLength , sizeof(char) , compare);

	int i , j , l[aLength+1][bLength+1];

	for(i = 0 ; i <= aLength ; i++)
	{
		for(j = 0 ; j <= bLength ; j++)
		{
			if( i == 0 || j == 0 ) l[i][j] = 0;
			else if (a[i-1]== b[j-1]) l[i][j] = l[i-1][j-1] + 1 ;
			else l[i][j] = max(l[i-1][j] , l[i][j-1]);
		}
	}

	int index = l[aLength][bLength];

	char string[index+1];
	string[index] = '\0' ;

	i = aLength ;
	j = bLength ;

	while (i > 0 && j > 0 )
	{
		if(a[i-1] == b[j-1]) 
		{
			string[index-1] = a[i-1];
			i-- ;
			j--;
			index--;
		}

		else if(l[i-1][j] > l[i][j-1]) i--;
		else j-- ;
	}

	qsort(string , strlen(string) , sizeof(char) ,compare);

	printf("%s\n", string);
}


int main()
{
	char a[1001] , b[1001] ;

	while(gets(a) && gets(b)) {
	    lcs(a , b);
	}
}
