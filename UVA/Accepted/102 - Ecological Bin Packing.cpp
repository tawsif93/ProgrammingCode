#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int bin[3][3] , save[6];
	string name[6];

	name[1] = "BGC" ;
	name[0] = "BCG" ;
	name[2] = "CBG" ;
	name[3] = "CGB" ;
	name[4] = "GBC" ;
	name[5] = "GCB" ;

	while((scanf("%d%d%d%d%d%d%d%d%d" , &bin[0][0] , &bin[0][1] ,&bin[0][2] , &bin[1][0] , &bin[1][1] , &bin[1][2] , &bin[2][0] , &bin[2][1] , &bin[2][2])) != EOF) {
	    save[1] = bin[0][1] + bin[0][2] + bin[1][0] + bin[1][2] + bin[2][0] + bin[2][1]  ;
	    save[0] = bin[0][1] + bin[0][2] + bin[1][0] + bin[1][1] + bin[2][0] + bin[2][2]  ;
	    save[2] = bin[0][0] + bin[0][1] + bin[1][1] + bin[1][2] + bin[2][0] + bin[2][2]  ; 
	    save[3] = bin[0][0] + bin[0][1] + bin[1][0] + bin[1][2] + bin[2][1] + bin[2][2] ;
	    save[4] = bin[0][0] + bin[0][2] + bin[1][1] + bin[1][2] + bin[2][0] + bin[2][1] ;
	    save[5] = bin[0][0] + bin[0][2] + bin[1][0] + bin[1][1] + bin[2][1] + bin[2][2] ;
	    
	    int temp = *min_element(save , save+6 );

	    for (int i = 0; i < 6; ++i)
	    {
	    	if(save[i] == temp )
	    	{
	    		cout << name[i] ; 
	    		printf(" %d\n" , temp);
	    		break ;
	    	}
	    }

	}
	return 0;
}
