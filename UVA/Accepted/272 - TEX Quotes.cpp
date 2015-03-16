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
	string input ;
	bool quoteStatus = false ;

	while(getline(cin , input )) {
		int loop = input.size() ;

		for(int i = 0 ; i < loop ; i++)
		{
			if(input[i] == '"' && !quoteStatus ) 
			{
				input.replace(input.begin()+i ,input.begin()+i+1 , "``") ;
				quoteStatus= true ;
				loop++ ;
			}
			else if (input[i] == '"' && quoteStatus )
			{
				input.replace(input.begin()+i ,input.begin()+i+1 , "\'\'") ;
				quoteStatus= false ;
				loop++ ;
			}
		}

		cout << input << endl ;
	}
	return 0;
}
