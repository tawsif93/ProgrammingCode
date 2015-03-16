#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() 
{
	int t;
	double a,b,c,d;
	double area;
	
	cin >> t;
	
	double s;
	
	for(int i = 0 ; i<t; i++) {
		cin >> a >> b >> c >> d;
		s = (b+d+abs(a-c))/2;
		area = (sqrt(s* abs(s-d) * abs(s-b) * abs(s-abs(a-c)) ) * (a+c)) / abs(a-c);
		
		cout << "Case " << i+1 << ": " << setprecision(12) << area << endl;
		
	}
	
	return 0;
}
