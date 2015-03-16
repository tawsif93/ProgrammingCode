#include<iostream>
#include<cmath>
#include<cstdio>
#include<string>
#include<iomanip>

using namespace std;


int main() 
{
	int t;
	double a, b;

	char c ;

	string hudai;
	
	double theta , r, s , x;
	 
	cin >> t  ;

	getline(cin , hudai);
	
	
	for (unsigned int i = 0; i < t; i += 1)
	{
		cin >> a >> c >> b;
		

		x = 400 / ((sqrt( a * a + b * b) * acos ((pow(a ,2) - pow(b,2) )/ ( pow(a , 2) + pow( b,2)))  ) + 2 * a) ;
		
		a = a * x;
		b = b * x;
		
		cout << "Case " << i+1 << ": " <<  setprecision(12) << a << " " << setprecision(12) << b << endl ;
	} 
	
}
