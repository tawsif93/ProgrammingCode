#include <stdio.h>

int main()
{
	int  i , cases, curDate , curMnth , curYear , birDate , birMnth , birYear ;
	char dump ;

	scanf("%d" , &cases);

	for (i = 0; i < cases; ++i)
	{
		getchar();
		scanf("%d%c%d%c%d" , &curDate , &dump ,&curMnth , &dump , &curYear);
		
		scanf("%d%c%d%c%d" , &birDate , &dump ,&birMnth , &dump , &birYear);

		if(curYear <= birYear)
		{
			if(curYear < birYear) printf("Case #%d: Invalid birth date\n",i+1 );
			
			else if(curMnth < birMnth || (curDate < birDate && curMnth==birMnth))
			{
				printf("Case #%d: Invalid birth date\n",i+1 );
			}
			else if( curDate >= birDate && curMnth >= birMnth || curMnth >= birMnth) printf("Case #%d: %d\n",i+1, 0);
		}

		else if((curYear- birYear) > 130 && curMnth >= birMnth && curDate>= birDate || (curYear- birYear) > 131) printf("Case #%d: Check birth date\n",i+1 );
		else 
		{
			if(curMnth == birMnth && curDate < birDate || curMnth < birMnth) printf("Case #%d: %d\n", i+1 , curYear- birYear-1);
			else printf("Case #%d: %d\n", i+1 , curYear- birYear);
		}
	}

	return 0 ;
}