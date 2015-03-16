#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int t;
	
	int size, operation, entry;
	
	string hudai, input;
	
	vector<int> data;
	cin >> t;
	
	for(int i =0 ; i< t; i++) {

		data.clear();
		
		cin >> size >> operation;
		cout << "Case " << i+1 << ":" << endl;
		
		for(int j = 0; j<operation; j++) {
			cin >> input ;
			if(input.compare("pushLeft")==0 && data.size() != size ) {
				cin >> entry;
				getline(cin, hudai);
				data.insert(data.begin(),entry);
				cout << "Pushed in left: " << entry << endl;
			}
			else if (input.compare("pushRight") == 0 && data.size() != size ) {
				cin >> entry;
				getline(cin, hudai);
				data.push_back (entry);
				cout << "Pushed in right: " << entry << endl;
			}

			
			else if (input.compare("popLeft")==0 && data.size() != 0 ) {
				cout << "Popped from left: " << *data.begin() << endl;
				data.erase(data.begin());
			}
			else if (input.compare("popRight")==0 && data.size() != 0 ) {
				cout << "Popped from right: " << *(data.end()-1) << endl;
				data.pop_back();
			}			
			else if (data.size() == size) {
				cin >> entry;
				cout << "The queue is full" << endl;
			}
			else if( data.size() == 0) cout << "The queue is empty" << endl;
			
		}
	}
	
}
