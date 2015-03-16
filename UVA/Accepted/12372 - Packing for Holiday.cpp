#include <stdio.h>

int main()
{
	int i ,cases , l , h, w ;

	scanf("%d" , &cases);

	for(i = 0 ; i < cases ; i++)
	{
		scanf("%d%d%d" ,&l , &h , &w);
		if( l > 20 || h > 20 || w > 20) printf("Case %d: bad\n", i+1);
		else printf("Case %d: good\n", i+1);
	}

	return 0 ;
}