#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int n ;
	while((scanf("%d" , &n) )== 1 ) {
	    int array[n] , d[n-1] , i , flag = 1;
	    
	    for (i = 0; i < n; ++i)
	    {
	    	scanf("%d" , &array[i]);
	    }

	    for (i = 0; i < n-1; ++i)
	    {
	    	d[i] = abs(array[i] - array[i+1]);
	    }

	    qsort (d, n-1 , sizeof(int), compare);

	    for (i = 0; i < n-2; ++i)
	    {
	    	if(d[i] == d[i+1] || d[i] > n-1 || d[i] < 1 || d[i+1] > n-1 || d[i+1] < 1) 
	    	{
	    		flag = 0 ;
	    		break;
	    	}
	    }

	    if (flag) printf("%s\n", "Jolly");
	    else printf("%s\n", "Not jolly");

	}
}