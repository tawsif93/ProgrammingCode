#include <stdio.h>
#include <string.h>
int main()
{
	int t , i , j , count;
	scanf("%d", &t);
	getchar();
	char message[103];

	for (i = 0; i < t; ++i)
	{
		count = 0;
		gets(message);
		int result ;

		for (j = 0; j < strlen(message); ++j)
		{
			if (message[j] == ' ') count++;

			else if ((message[j] >= 'a' && message[j] <= 'o') )
			{
				result = ((((int)message[j]- 96) % 3)== 0 )? 3 : (((int)message[j]- 96) % 3);
				count += result;
			}

			else if ((message[j] >= 'p' && message[j] <='s') )
			{
				result = ((((int)message[j]- 95) % 4)== 0) ? 4 : (((int)message[j]- 95) % 4);
				count += result;				
			}

			else if ((message[j] >= 't' && message[j] <= 'v'))
			{
				result = (((((int)message[j]- 97) % 3))== 0 )? 3 : ((((int)message[j]- 97) % 3));
				count += result;	
			}


			else if ( (message[j] >= 'w' && message[j] <='z'))
			{
				result = (((((int)message[j]- 98)) % 4)== 0 )? 4 : ((((int)message[j]- 98) % 4));
				count += result;	
			}
		}

		printf("Case #%d: %d\n", i+1 , count);
	}
}