#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int t;
	
	double s,a,b,c,r1,r2,r3,theta1, theta2,theta3, cir1,cir2,cir3,triangle,area;
	
	cin >> t;
	for (unsigned int i = 0; i < t; i += 1)
	{
		cin >> r1 >> r2 >> r3;
		
		a = r1 + r2;
		b = r2 + r3;
		c = r1 + r3;
		theta1 = acos((pow(a,2) + pow(c,2) -pow(b,2))/ (2 * a * c)) ;
		theta2 = acos((pow(a,2) + pow(b,2) -pow(c,2))/ (2 * a * b)) ;
		theta3 = acos((pow(c,2) + pow(b,2) -pow(a,2))/ (2 * c * b)) ;
		
		cir1 = .5 * pow(r1,2) * theta1;
		cir2 = .5 * pow(r2,2) * theta2;
		cir3 = .5 * pow(r3,2) * theta3;
		
		s = (a + b + c) / 2;
		
		triangle = sqrt( s * (s - a) * (s-b) * (s-c));
		
		area = triangle - cir1 - cir2 - cir3 ;
		cout << "Case " << i+1 << ": " << setprecision(12) << area << endl;
	}
	
}
