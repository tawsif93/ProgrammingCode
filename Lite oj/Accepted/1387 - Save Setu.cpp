#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() 
{	
	
	int t;
	string input,hudai;
	
	long amount, account;
	int operations;
	
	cin >> t;
	
	for (int i=0; i < t; i++ ) {
		cin >> operations;
		amount = 0;
		account = 0;
		cout << "Case " << i+1 << ":" << endl;
		for(int j = 0 ; j< operations ; j++ ) {
			getline(cin, hudai);
			cin >> input;
			
			if ( input[0] == 'd') {
				cin >> amount;
				account += amount;
			}
			else if( input[0] == 'r') cout << account << endl;
		}
	}
return 0;
}
