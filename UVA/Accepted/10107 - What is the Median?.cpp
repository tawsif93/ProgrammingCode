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
	long long a;
	vector <long long > v ;

	while(cin>>a) {
		v.push_back(a);
		sort(v.begin() , v.end());
		if (v.size() & 1)
		{
			cout << v[v.size() / 2] << endl;
		}

		else
		{
			cout << (int)((v[v.size()/2] + v[v.size()/2 -1])/2) << endl ;
		}
	}
	return 0;
}
