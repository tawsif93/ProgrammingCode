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
	string s ;
	long long count ;

	while(cin >> s && s != "0") {
	    
	    count = 0 ;

	    for (int i = 0; i < s.length() ; ++i)
	    {
	    	count += (int)(s[i]-'0')	* (pow (2 , (s.length()- i)) - 1) ;
	    	
	    }

	    cout << count << endl;
	}
	return 0;
}
