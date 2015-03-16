/********************/
/* Edited by Tawsif */
/********************/

#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iterator>
#include <cctype>

using namespace std;

int counter;

int divisors(int in){
	counter = 0;
	for(int j = 1 ; j <= sqrt(in) ; j++ )
	{
		if (in % j==0 )
		{
			counter++;
			if (j != in/j && j != 1 ) {
				counter++;
			}
		}
	}
	return counter;
}

int main (int argc, char const* argv[])
{
	int t ,sort[1000];
	vector<int> save;
	for(int i = 1; i <= 1000 ; i++ ) {
		int div = divisors(i);
		save.push_back(div);
	}
	sort[0] = 1;
	int k = 1;
	for(int j = 1; j <= 31 ; j++){
		for(int i = 1000-1 ; i >=1; i--){
			if(save[i] == j) {
				sort[k] = i+1 ;
				k++;
			}

		}
	}
	cin >> t;
	for(int po = 0 ; po < t; po++){
		int user;
		cin >> user;
		cout << "Case " << po+1 << ": " << sort[user-1] << endl;
	}
	return 0;
} 	
