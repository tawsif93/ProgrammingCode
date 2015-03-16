#include<iostream>

using namespace std;

int main()
{
	int t,count;
	long n;
	cin >> t;
	
	for (int i = 0 ; i < t ; i++ ) {
		cin  >> n ;
		count=0;
		
		for (int j =0; n ; ++j) {
			if( n % 2 == 1) count++ ;
			n /= 2;
		}
		if ( count & 1) cout << "Case " << i+1 << ": odd" << endl;
		else cout << "Case " << i+1 << ": even" << endl;
	}
	
	return 0;
}
