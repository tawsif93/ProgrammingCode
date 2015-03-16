#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main() {
	int t;
	double a1,a2,b1,b2,c1,c2,d1,d2;
	double hight,area;
	double base , side, AC,A;
	cin >> t;
	
	for(int i = 0; i< t; i++) {
		cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 ;
		
		d1 = a1 + c1 - b1;
		d2 = a2 + c2 - b2;
		
		AC = sqrt ( pow(a1-c1,2)+ pow(a2-c2,2));
		base = sqrt ( pow(a1-b1,2)+ pow(a2-b2,2));
		side = sqrt ( pow(b1-c1,2)+ pow(b2-c2,2));
		
		A = acos((pow(AC,2)-pow(base,2)-pow(side,2))/(2*base*side));
		
		area = base * side *sin(A);
		printf("Case %d: %.0lf %.0lf %.0lf\n", i+1, d1, d2, area);
		//cout << "Case " << i+1 << ": " << d1 << " " << d2 << " " << area << endl;
		
	}
	
}

