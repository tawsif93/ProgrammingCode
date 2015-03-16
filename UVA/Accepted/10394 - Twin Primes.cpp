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

#define MAX 20000005

bool p[MAX+4];

void SeiveMthod()
{
	p[0]= p[1] = true ;

	for (int i = 4; i < MAX; i += 2)
	{
		p[i] = true ;
	}

	int sq = sqrt(MAX) ;

	for (int i = 3; i < sq ; i += 2)
	{
		if(p[i]) continue;
		
		else 
		{
			for(int j = i + i  ; j < MAX ; j+=  i)
			{
				p[j] = true ;
			}
		}
	}	
}

struct twin
{
	int a , b ;
};

vector <twin> track ;

int main(int argc, char const *argv[])
{

	SeiveMthod() ;

	twin test ;

	for (int i = 3; i < MAX; )
	{
		if(!p[i] && !p[i+2])
		{
			test.a = i ;
			test.b = i+2 ;

			track.push_back(test);
			i+= 2 ;
		}

		else i++ ;
	}

	int n ;

	while(scanf("%d" , &n)==1) {
	    printf("(%d, %d)\n", track[n-1].a , track[n-1].b);  
	}
	
	return 0;
}