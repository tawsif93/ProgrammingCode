#include <stdio.h>
#include <string.h>

int max (int a , int b)
{
	return (a>b)? a : b ;
}

void LCS (char *x , char *y)
{
    int i , j , xLength = strlen(x) , yLength = strlen(y) ;

	int l[xLength+1][ yLength+1] ;
	
	for (i = 0; i <= xLength ; ++i)
	{
		for (j = 0; j <= yLength; ++j)
		{
			if (i == 0 || j== 0 )
			{
				l[i][j] = 0 ;	
			}

			else if (x[i-1] == y[j-1])
			{
				l[i][j] = 1 + l[i-1][j-1] ;
			}

			else
				l[i][j] = max(l[i][j-1] , l[i-1][j]) ;
		}
	}

	printf("%d\n" , l[xLength][yLength] ) ;
}

int main(int argc, char const *argv[])
{
	char x[1001] , y[1001] ;

	while(gets(x)) {
		gets(y);
		LCS(x , y);
	}
	return 0;
}
