#include <stdio.h>
#include <string.h>

int main()
{
	int i , flag , k , j ,cases ;
	char input[201] , temp[201];
	scanf("%d" , &cases);

	for (i = 0; i < cases; ++i)
	{
		scanf("%s" , input);

		strcpy(temp ,input);

		printf("Case %d: ", i+1);

		for(j = 0 ; j < strlen(temp) ; j++)
		{
			if(temp[j] >='A' && temp[j] <= 'Z') 
			{
				temp[j] = ' ' ;
				sscanf(temp , "%d" , &flag);

				for(k = 0 ; k < flag ; k++)
				{
					printf("%c", input[j]);
				}
			}

			temp[j] = ' ';
		}
		printf("\n");
	}
}
