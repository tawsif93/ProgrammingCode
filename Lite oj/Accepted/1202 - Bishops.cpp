#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iterator>
#include <cctype>
#include <cstdlib>

using namespace std;

int main (int argc, char const* argv[])
{
	int t;
	long long c1,r1,c2,r2 , cDifference, rDifference;
	cin >> t;
	for (unsigned int i = 0; i < t; i += 1)
	{
		cin >> c1 >> r1 >> c2 >> r2;

		cDifference = abs(c1 - c2) ;
		rDifference = abs(r1 - r2) ;

		if((r1==r2 && !(cDifference % 2)) || (c1== c2 && !(rDifference % 2))) cout << "Case " << i+1 << ": 2" << endl;
		else if( (c1 ==r1) && (c2== r2)) cout << "Case " << i+1 << ": 1" << endl;
		//else if ( !(cDifference % 2) && !(rDifference & 2) )cout << "Case " << i+1 << ": 1" << endl;
		else if (cDifference == rDifference)cout << "Case " << i+1 << ": 1" << endl;
		else if ((cDifference %2 == 0 && rDifference %2 == 0) || (rDifference&1 && (cDifference & 1)))cout << "Case " << i+1 <<": 2"<< endl;
		else cout << "Case " << i+1 << ": impossible" << endl;
	}

	return 0;
}
