#include <stdio.h>
#include <string.h>

int min(int a , int b)
{
	return (a<b)? a : b ;
}

int max(int a , int b)
{
	return (a>b)? a : b ;
}

int main()
{
	char a[1000001] ;
	long long int cases ,flag ,  i , j  ,first , last , count = 0 ;

	while(gets(a)) {
	    scanf("%lld" , &cases);
	    printf("Case %lld:\n", ++count);

	    for (i = 0; i < cases; ++i)
	    {
	    	scanf("%lld%lld", &first , &last);
	    	flag = 1 ;

	    	if (first == last ) flag = 1;
	    	else 
	    	{	
		    	for(j = min(first , last) ; j < max(first ,last ); j++)
		    	{
		    		 
		    		if ((a[j] != a[j+1]) )
		    		{
		    			flag = 0 ;
		    			break;
		    		}

		    	}
			}	
	    	
	    	(flag)? printf("Yes\n") : printf("No\n");
	    	getchar();
	    }


	}
}