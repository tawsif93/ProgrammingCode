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
	string s , mainString;
	int i = 0;

	while(getline(cin , s)) {
		if ( s != "") 
		{
			mainString += s ;
			
			for (i ; i < mainString.length(); ++i)
			{
				if (mainString[i] == '!') cout << endl ;

				else if( mainString[i] >= 'A' && mainString[i] <= 'Z'  || mainString[i] == '*' || mainString[i] == 'b' )
				{
					int count = 0 ;
					for (int j = i-1; ; j--)
					{

						if(i > 0 && mainString[j] >= '1' && mainString[j] <= '9' )
						{
							count += mainString[j] - '0' ;
						}

						else break;
					}

					for (int j = 0; j < count; ++j)
					{
						if(mainString[i] == 'b') cout << ' ' ;
						else cout << mainString[i] ;
					}
				}
			}

			cout << endl;
		}

		else 
		{
			cout << endl;
			i = 0;
			mainString = "" ;
		}
	}
	return 0;
}
