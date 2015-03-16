#include <stdio.h>
#include <string.h>

int main()
{
	int flag , i , j , l , n ; 

	scanf("%d%d" , &l , &n);

	char irregular[l][2][25] , out[n][25] , temp[25] ;

	for(i = 0 ; i < l ; i++)
	{
		scanf("%s %s" , irregular[i][0] , irregular[i][1]);
	}

	for(i = 0 ; i < n ; i++)
	{
		flag = 0 ;
		scanf("%s", temp);

		for(j = 0 ; j < l ; j++)
		{
			if(!strcmp(temp, irregular[j][0]))
			{
				flag = 1 ;
				strcpy(out[i] , irregular[j][1]);
				break ;
			}
		}

		if( !flag && temp[strlen(temp)-1] == 'y' && temp[strlen(temp)-2] >= 'a' && temp[strlen(temp)-2] <= 'z' && temp[strlen(temp)-2]!= 'a' && temp[strlen(temp)-2] != 'e' && temp[strlen(temp)-2] != 'i' && temp[strlen(temp)-2]!= 'o' && temp[strlen(temp)-2] != 'u')
		{
			temp[strlen(temp)-1] = '\0' ;
			strcat(temp, "ies");
			strcpy(out[i] , temp);
		}

		else if( !flag && (temp[strlen(temp)-1]== 'o' || temp[strlen(temp)-1] == 's' || (temp[strlen(temp)-1] == 'h' && temp[strlen(temp)-2] == 'c') || (temp[strlen(temp)-1] == 'h' && temp[strlen(temp)-2] == 's') || temp[strlen(temp)-1] == 'x'))
		{
			strcat(temp, "es");
			strcpy(out[i] , temp);
		}

		else if(!flag)
		{
			strcat(temp, "s");
			strcpy(out[i] , temp);
		}

		printf("%s\n", out[i]);
	}


}