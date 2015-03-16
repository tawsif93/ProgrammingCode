#include <stdio.h>
int main()
{
	int cases , a , f , i , j , k;

	scanf("%d" , &cases);

	while (cases--)
	{
		scanf("%d%d" , &a, &f);

		for(i = 0 ; i < f ; i++)
		{
			for ( j = 1; j <= a; ++j)
			{
				for( k = j ; k > 0 ; k--) printf("%d", j);
				
				printf("\n");
			}
			for ( j = a-1; j > 0; j--)
			{
				for( k = j ; k > 0 ; k--) printf("%d", j);
				
				printf("\n");
			}

			if(f-1 != i ) printf("\n");
		}
		if(cases ) printf("\n");
	}
}