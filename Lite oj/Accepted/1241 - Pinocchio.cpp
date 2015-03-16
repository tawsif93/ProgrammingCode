#include<iostream>

using namespace std;

int main() 
{
	int t;
	int report, lies, initial , lieCount;
	
	cin >> t;
	
	for(int i =0 ; i < t; i++) {
		cin >> report;
		lieCount = 0;
		initial = 2; 
		
		for(int j =0 ; j < report ; j++ ) {
			cin >> lies;
					lieCount = lieCount + (lies - initial)/5;
					if((lies - initial) % 5 != 0) lieCount = lieCount + 1;
					initial = lies;
		}
		
		cout << "Case " << i+1 << ": " << lieCount << endl;
	}
	
	return 0 ;
}
