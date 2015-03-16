#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <stack>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int cases ;
	cin >> cases;

	while(cases--) {
	    string input ;
	    cin >> input ;

	    if (input.length() == 5)
	    {
	    	cout << 3 << endl;	
	    }

	    else if (input.length() == 3)
	    {
	    	if(input[0] == 't' && input[1] == 'w' && input[2] == 'o' || input[0] == 't' && input[1] == 'w' && input[2] != 'o' || input[0] == 't' && input[1] != 'w' && input[2] == 'o' || input[0] != 't' && input[1] == 'w' && input[2] == 'o')
	    		cout << 2 << endl ;
	    	else cout << 1 << endl ;
	    }
	}
	return 0;
}
