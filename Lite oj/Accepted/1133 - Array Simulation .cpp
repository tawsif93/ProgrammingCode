#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main() 
{
	int t; 
	char choice;
	int element, option;
	vector <int> array;
	
	cin >> t;
	
	for ( int i=0 ; i <t; i++) {
		cin >> element >> option;
		array.clear();
		
		for(int j = 0; j <element; j++) {
			int input;
			cin >> input;
			array.push_back(input);
		}
		
		for(int j =0; j< option; j++ ) {
			cin >> choice;
			//Summation
			
			if(choice == 'S') {
				int number;
				cin >> number;
				transform( array.begin(), array.end(),array.begin(), bind2nd(plus<int>(), number ) );
			}
			//Multiply
			
			else if (choice == 'M'){
				int number;
				cin >> number;
				transform( array.begin(), array.end(),array.begin(), bind2nd(multiplies<int>(), number ) );
			}
			//Divide
			
			else if (choice == 'D'){
				int number;
				cin >> number;
				transform( array.begin(), array.end(),array.begin(), bind2nd(divides<int>(), number ) );
			}
			//Reverse
			
			else if (choice == 'R') {
				reverse(array.begin(), array.end());
			}
			//Swap
			
			else if (choice == 'P') {
				int x ,y;
				cin >> y >> x;
				swap(array[y],array[x]);
			}
		}
		cout << "Case " << i+1 <<":" << endl;
		
		for(int j = 0; j <element; j++) {
			cout << array[j]  ;
			if(j != element-1) cout << " ";
		}
		cout << endl;
	}
	
}
