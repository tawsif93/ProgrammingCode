#include <algorithm>
#include <cstdio>
#include <cstring>


int main(int argc, char const *argv[])
{
	char a[100000] ;
	char *p ;

	while (gets(a))
	{
		p = strtok(a , " ");

		while(p!= NULL) {
			
			std::reverse(p , p+strlen(p)); 
		    printf("%s", p);
		    p = strtok(NULL , " ");

		    if(p) putchar(' ');
		}

		printf("\n");
	} 

	return 0;
}
