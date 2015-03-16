#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int count =0;
void myfunction (int i) {
  count += count (segment.begin(), segment.end(), i);
}


int main()
{
	int t;
	int n, q,enter,a,b;

	cin >> t;
	vector<int> segment;
	vector<int> input;

	for (unsigned int i = 0; i < t; i += 1){
		input.clear();
		cin >> n >> q;
			segment.clear();
			cin >> enter ;
			input.push_back(enter);
		for (unsigned int k = 0; k < q; k += 1)
			cin >> a >> b;
			segment.push_back(b);
			segment.push_back(a);
			//search (input.begin(), input.end(), segment.begin(), segment.end(),mypredicate);
		for (unsigned int k = 0; k < n; k += 1)
			for_each (input.begin(), input.end(), myfunction);
			cout << count << endl;
			count = 0;
