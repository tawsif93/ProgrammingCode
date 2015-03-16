#include <stdio.h>

int main()
{
	int cases , l , i , j , swaps ;
	
	scanf("%d" , &cases);

	while(cases--)
	{
		scanf("%d", &l);
		swaps = 0 ;
		int array[l] ;

		for (i = 0; i < l; ++i)
		{
			scanf("%d", &array[i]);
		}
		for (i = 0; i < l; ++i)
		{		
			for(j = 0 ; j < l-1 ; j++)
			{
				if(array[j] > array[j+1]) 
				{
					array[j+1] = array[j]+array[j+1] - (array[j] = array[j+1]);
					swaps++ ;
				}
			}

		}
		printf("Optimal train swapping takes %d swaps.\n", swaps);
	} 
}