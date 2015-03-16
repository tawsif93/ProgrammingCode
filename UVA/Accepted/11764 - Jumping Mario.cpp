#include <stdio.h>

int main()
{
	int i , jumps ,  cases ;
	scanf("%d" , &cases);

	for(i = 0 ; i < cases ; i++)
	{
		scanf("%d" , &jumps);

		int j , pre , post , highCount = 0 , lowcount = 0 ;

		for(j= 0 ; j < jumps ; j++)
		{
			scanf("%d" , &post);
			if(j && post > pre) highCount++ ;
			else if( j && post < pre) lowcount++ ;

			pre = post ;
		}

		printf("Case %d: %d %d\n", i+1 , highCount, lowcount);
	}

	return 0 ;
}