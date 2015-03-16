#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int t;
	
	double v1,v2,v3,a1,a2,d,bird,time1,time2;
	
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		cin >> v1 >> v2 >> v3 >> a1 >> a2;
		
		d = v1 * v1 / (2 * a1) + v2 * v2 / (2 * a2);
		time1 = v1 / a1;
		time2 = v2 / a2;

		if(time1 < time2) {
			bird = v3 * time2;
		}	
		else bird = v3 * time1;
		

		cout << "Case " << i+1 << ": " << setprecision(12) << d << " " << setprecision(12) << bird << endl;
	}
	
	return 0;
}
