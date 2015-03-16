#include<iostream>
#include<vector>

using namespace std;

int main()
{

	int t ;
	unsigned long upperLimit,lowerLimit, countLow , countHigh,count;

	cin >> t;

	for(int i = 0 ; i < t ; i++) {
		cin >> lowerLimit >> upperLimit;
		count = 0 ;

		if(lowerLimit % 3 == 0 || lowerLimit % 3 == 2) count += 1 ;

		if(lowerLimit % 3 == 2 ) countLow = (lowerLimit/3) * 2 + 1;
		else countLow = (lowerLimit/3) *  2 ;

		if(upperLimit % 3 == 2 ) countHigh = (upperLimit/3) * 2 + 1;
		else countHigh = (upperLimit/3) *  2 ;

		count += ( countHigh - countLow);

		cout << "Case " << i+1 << ": " << count << endl;
		}

}
