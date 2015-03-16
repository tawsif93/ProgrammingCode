#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main()
{
	int cases , array[3];

	scanf("%d"  , &cases);
	for (int i = 0; i < cases; ++i)
	{
		scanf("%d%d%d" , &array[0] , &array[1] , &array[2]);

		qsort(array, 3 , sizeof(int) , compare);

		printf("Case %d: %d\n", i+1 , array[1]);
	}
}