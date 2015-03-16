#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main () 
{
	int t;
	long Ox, Oy, Ax, Ay, Bx, By;
	double theta1,theta2, length, OA, OB, AB;
	const double pi = 3.1415926535897;
	
	cin >> t;
	
	for (int i =0 ; i < t; i++ ) {
		cin >> Ox >> Oy >> Ax >> Ay >> Bx >> By;
		OA = sqrt((pow((Ox-Ax),2) +	pow((Oy-Ay),2)));
		AB = sqrt((pow((Bx-Ax),2) +	pow((By-Ay),2)));
		OB = sqrt((pow((Bx-Ox),2) +	pow((By-Oy),2)));
		
		theta1 = acos((pow(OA,2)+pow(OB,2)-pow(AB,2))/(2 * OA * OB));
		
		theta2 = 2*pi -theta1;
		
		if(theta1 < theta2 ) {
			length = OA * theta1;
			cout << "Case " << setprecision(12) << i+1 << ": " << length << endl;
		}
		else {
			length = OA * theta2;
			cout << "Case " <<  setprecision(12) << i+1 << ": " << length << endl;
		}
		
	}
	
return 0;
}
