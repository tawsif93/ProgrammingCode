#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#include<iterator>

using namespace std;

int main() 
{
	int t,student;
	
	int k,l,data,minPos,maxPos;
	string hudai;
	long max,min;
	vector <int> height;
	vector <int> length;
	vector <int> width;
	vector <long> product;
		
	cin >> t;
	
	for(int i = 0 ; i < t ; i++) {
		cin >> student;
		string name[student];
		length.clear();
		height.clear();
		width.clear();
		product.clear();
		
		getline(cin , hudai);
		
		for(int j = 0 ; j < student; j++) {
			cin >> name[j];
			cin >> data;
			height.push_back(data);
			
			cin >> data;
			length.push_back(data);
			
			cin >> data;
			width.push_back(data);
			getline(cin , hudai);
			
			product.push_back(height[j]*length[j]*width[j]);
			
		}
		max = *max_element(product.begin(), product.end());
		min = *min_element(product.begin(), product.end());
		minPos = distance(product.begin(), min_element(product.begin(), product.end()));
		maxPos = distance(product.begin(), max_element(product.begin(), product.end()));
		
		if(max != min ) cout <<"Case " << i+1 << ": " << name[maxPos] << " took chocolate from "<< name[minPos] << endl;
		else cout <<"Case " << i+1 << ": no thief" << endl;
		
	}
	
	return 0;
}
