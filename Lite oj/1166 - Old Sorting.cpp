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
int count1;

bool myfunction (int i,int j) {
if(i < j) count1++ ;
return (i<j);
}

int main (int argc, char const* argv[])
{
	int t,n;

	cin >> t;
	for (unsigned int i = 0; i < t; i += 1)
	{
		count1 = 0;

		cin >> n;
		vector<int> array;
		for (unsigned int j = 1; j <=n; j += 1) {
			int input;
			cin >> input;
			array.push_back(input);
		}

		partial_sort(array.begin(), array.end(),array.end(), myfunction);

		printf("%d\n",count1-1);
	}

	return 0;
}
