#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int t ;
	int n,P,Q;
	
	cin >> t;
	
	for(int i=0 ; i<t; i++) {
		cin >> n >> P >> Q;
		
		int egg[n];
		
		for(int j= 0; j< n; j++) cin >> egg[j];
		
		int count = 0 ;
		int eggCount =0;
		
		for(int k=0 ; k<n; k++) {
			eggCount  = eggCount + egg[k];
			if( eggCount <= Q && k+1 <= P) count++;
		}
		cout << "Case " << i+1 << ": " << count << endl; 
	}	
	
}
