#include<iostream>
#include<vector>

using namespace std;

int main() 
{
	int t;
	vector <int> rgb;
	int cost=0;
	int number,input,pos;
	int finalCost=0;
	
	cin >> t;
	
	for (int i = 1; i <=t ; i++ ) 
	{
		cout << endl;
		cin >> number;
		
		for(int j= 0 ; j< number*3 ; j++ ) {
			cin >> input;
			rgb.push_back(input);
		}
		
		cost = rgb[0];
		pos = 1;
		
		for(int j=1; j<3;j++ ) {
			if(cost > rgb[j]) {
				cost = rgb[j];
				pos = j+1;
			}
		}
		
		for(int j=1 ; j <number ;j++) {
			if( pos & 1) {
				if(pos==3) {
					int gcost=rgb[j*3];
					if(rgb[j*3+1]<=gcost) {
						cost += rgb[j*3+1];
						pos=2;
					}
					else {
						cost += gcost;
						pos  =1;
					}
				}
				else {
					int gcost=rgb[j*3+2];
					if(rgb[j*3+1]<=gcost) {
						cost += rgb[j*3+1];
						pos=2;
					}
					else {
						cost += gcost;
						pos  =3;
					}
				}
			}
			else {
				int gcost=rgb[j*3+2];
					if(rgb[j*3]<=gcost) {
						cost += rgb[j*3];
						pos=1;
					}
					else {
						cost += gcost;
						pos  =3;
					}
				}						
			}
		cout << "Case " << i << ": " << cost << endl;
		cost = 0;
		rgb.clear();
		
		 
	}
	
	return 0;	 
	
}
