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

using namespace std;

template <typename Iterator>
void heap_sort(Iterator begin, Iterator end)
{
    make_heap(begin, end);
    sort_heap(begin, end);
}

int main (int argc, char const* argv[])
{
	int t ;

	int n, q,qurreyStart,qurreyFinish;

	cin >> t;

	for (unsigned int i = 0; i < t; i += 1)
	{
		cin >> n >> q ;
		int vecIn[n];
		cout << "Case " << i+1 << ":" << endl;
		for(int j = 0 ; j < n ; j++){
			cin >> vecIn[j];
		}
		list<int> v;
		for( int j = 0 ; j < q ; j++) {
			cin >> qurreyStart >> qurreyFinish;
			v.clear();
			v.assign (vecIn-1+qurreyStart,vecIn+qurreyFinish);
			v.sort();
			vector<int> v1(v.begin(),v.end());
			make_heap (v1.begin(),v1.end());
			cout << v.front() << endl;
		}
	}


	return 0;
}
