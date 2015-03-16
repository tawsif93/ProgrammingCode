#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int t;
	
	double w, l , x1, x2,v2,v1 ,volume;
	
	cin >> t;
	
	for( int i = 0 ; i < t ; i++ ) {
		cin >> l >> w ;
		
		x1 = (4 * ( w + l) + sqrt( 16 * pow((w + l ) , 2) - 48 * l * w )) / 24 ; 
		
		x2 = (4 * ( w + l) - sqrt( 16 * pow((w + l ) , 2) - 48 * l * w )) / 24 ; 
		
		v1 = 24 * x1 - 4 * w - 4 * l ;
		v2 = 24 * x2 - 4 * w - 4 * l ;		
		
		if(v1 < v2 ) {
			volume = x1 * (w - 2* x1 ) * ( l - 2* x1) ;
			cout << "Case " << i+1 << ": " << setprecision(12) << volume << endl;
		}
		
		else {
			volume = x2 * (w - 2 * x2 ) * ( l - 2 * x2) ;
			cout << "Case " << i+1 << ": " << setprecision(12) << volume << endl;
		}
	}
}
