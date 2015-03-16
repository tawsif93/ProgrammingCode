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


void swap(char *a , char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void permute ( vector <string> &p ,string &a , int i , int n)
{
	
	if ( i== n ) p.push_back(a);
	else
	{
		for (int j = i ; j <= n; j++)
		{
			swap(a[i] , a[j]);
			permute( p ,a , i+1 , n);
			swap(a[i], a[j]);
			
		}
	}
}

int main()
{
	int cases ;
	cin >> cases;
	string hudai ;
	getline(cin , hudai);

	while(cases--) {
		string a;
		cin >> a;
		vector<string> p;
		permute(p ,a , 0 , a.length()-1);
		
		sort(p.begin() , p.end()) ;
		p.erase( unique( p.begin(), p.end() ), p.end() );

		for (int i = 0; i < p.size(); ++i)
		{
			cout << p[i] << endl;
		}
		cout << endl ;
		p.clear();
	}
}