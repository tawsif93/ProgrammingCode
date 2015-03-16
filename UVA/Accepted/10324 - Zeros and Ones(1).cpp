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
	string a , hudai;
	int cases = 0, test ;

	while(cin >> a) {
	    cases++;
	    cout << "Case " << cases << ":\n" ;
	    cin >> test ;

	    while(test--) {
	    	int first , last ;
	    	cin >> first >> last ;

	    	string temp = a.substr( min(first , last) , abs(last-first)+1);

	    	temp.erase( unique( temp.begin(), temp.end() ), temp.end() );

	    	if(temp.length() == 1) cout << "Yes" << endl;
	    	else cout << "No" << endl;
	    }
	}
	return 0;
}
