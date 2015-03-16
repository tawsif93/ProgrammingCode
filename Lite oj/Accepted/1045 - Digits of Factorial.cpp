/*************************/
/* Fazle MOhammed Tawsif */
/*      BSSE 0628        */
/*************************/

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
#include <list>
#include <stack>
#include <queue>

using namespace std;

int main (int argc, char const* argv[])
{
	int cases;
	long long n, base;
	double save = 0 ,reciever;

	vector<double> factorial;

	for (unsigned int j = 1; j <= 1000000; j += 1) {
		save += log(j);
		factorial.push_back(save);
	}
	cin >> cases;

	for (unsigned int i = 0; i < cases; i += 1)
	{
		cin >> n >> base;

		reciever = factorial[n-1]/ log(base);

		cout << "Case " << i+1 << ": " << (long)++reciever << endl;
	}

	return 0;
}
