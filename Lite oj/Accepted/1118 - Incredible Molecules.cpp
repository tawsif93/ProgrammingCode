#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int t;

	double x1,x2,y1,y2,r1,r2,d,area, area1,area2;
	double pi = 3.1415926535897;

	cin >> t;

	for ( int i = 0 ; i < t ; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2 ;

		d = sqrt(pow(x1-x2, 2) + pow( y1-y2 , 2) );

		double a = (1 / d ) *sqrt ((-d+r1+r2) * (d - r1 + r2) * (d -r2 + r1) * ( d +r1 +r2));
		double s1 = ( a + 2 *r1 ) / 2;
		double s2 = ( a + 2 *r2 ) / 2;

//		area1 = pow(r1,2) * acos(d/(2*r1)) - ( d/4 ) * sqrt( 4* pow(r1 ,2) -pow(d , 2) );
//		area1 = pow(r2,2) * acos(d/(2*r2)) - ( d/4 ) * sqrt( 4* pow(r2 ,2) -pow(d , 2) );

		area =  r1 * r1 * asin ( a / (2 *r1 ) ) - sqrt( s1 * (s1-a) * pow((s1-r1),2)) + r2 * r2 * asin ( a / (2 *r2 ) ) - sqrt( s2 * (s2-a) * pow((s2-r2),2));
		area1 = pi * ( pow(r1 , 2) + pow(r2 ,2)) -area ;

		cout << "Case " << i+1 << ": " <<  area << endl;
				cout << "Case " << i+1 << ": " <<  area1 << endl;
	}

}
