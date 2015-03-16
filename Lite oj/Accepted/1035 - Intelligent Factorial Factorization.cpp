/*************************/
/* Fazle MOhammed Tawsif */
/*	   BSSE 0628		 */
/*************************/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iterator>
#include <cctype>
#include <cstdlib>

using namespace std;

int main (int argc, char const* argv[])
{
	int t,count,temp;
	int primes[] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47 , 53 , 59 , 61 , 67 , 71 , 73 , 79 , 83 , 89 , 97 };
	cin >> t;
	for (unsigned int i = 0; i < t; i += 1)
	{
		int n;

		cin >> n;
		cout << "Case " << i+1 << ": " << n << " = ";
		for(int j = 0 ;j < 25 ; j++){
			count = 0;
			temp = n;
			if(primes[j] > n) break;

//			cout << "jskjkjs" << endl;
				for ( ;; ){
					if(temp == 0) break;
					temp /= primes[j];
					count += temp;
				}
				cout << primes[j] << " (" << count << ")";
				if(primes[j+1] <= n) cout << " * ";
		}

		cout << endl;

	}
	return 0;
}
