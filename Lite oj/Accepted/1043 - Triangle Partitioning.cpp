#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() 
{
	int t;
	double a,b,c, AD,ratio;
	
	cin >> t;
	
	for(int i =0 ; i < t; i++) {
		cin >> a >> b >> c >> ratio;
		
		AD = a * sqrt( ratio /(ratio +1));
		
		cout << "Case " << i+1 << ": " << setprecision(12) <<  AD << endl;
		
	}
	
}
