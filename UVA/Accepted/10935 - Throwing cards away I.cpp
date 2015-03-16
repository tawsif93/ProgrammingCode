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
	int n ;

	while(scanf("%d" , &n)== 1 && n) {
	    queue <int> track;

	    for(int i = 1 ; i <= n ; i++)
	    {
	    	track.push(i);
	    }

	    printf("Discarded cards:");

	    bool flag = false ;

	    while(track.size() != 1)
	    {
	    	if(!flag) printf(" ");
	    	if(flag)printf(", ");

	    	printf("%d", track.front());
	    	track.pop();
	    	track.push(track.front());
	    	track.pop();
	    	flag = true ;
	    }

	    printf("\nRemaining card: %d\n", track.front());
	}
	return 0;
}
