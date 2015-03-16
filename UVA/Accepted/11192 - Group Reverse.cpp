#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <list>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	int i ;

	char input[103];

	while(scanf("%d" , &i) && i) {
		getchar();
		scanf("%s" , input) ; 
	    i = strlen(input) / i ;
	    
	    int track = 0 , multiplyer = 1 ;
	    while(track != strlen(input))
	    {
		    reverse(input+ track  , input+ ((i * multiplyer) ));
		    track +=  i ;
		    multiplyer++;
		}

		printf("%s\n", input);
	}


	return 0;
}
