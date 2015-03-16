/********************/
/* Edited by Tawsif */
/********************/
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iterator>
#include <cctype>

using namespace std;

#define pi 2*acos(0.0)

int main (int argc, char const* argv[])
{
	int t,n;
	cin >> t;

	double R,r,theta,lombo,vumi,s;

	for (unsigned int i = 0; i < t; i += 1)
	{
		cin >> R >> n;

		theta = pi / n ;
		vumi = R / cos( theta);
		lombo  = 2 *sin(theta) * vumi ;

		s = (lombo+2 * vumi)/2;

		r = sqrt(s*(s-lombo)* (s-vumi)*(s-vumi)) / s;
		if(n == 2) cout << "Case " << i+1 << ": " << setprecision(12) << R / 2 << endl;
		else  cout << "Case " << i+1 << ": " << setprecision(12) << r << endl;
	}

	return 0;
}
