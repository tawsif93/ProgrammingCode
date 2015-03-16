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

int main (int argc, char const* argv[])
{
	int t;
	unsigned long long input ,cellX , cellY,saveRoot,squareSaveRoot;


	cin >> t;

	for (unsigned int i = 0; i < t; i += 1)
	{
		cin >> input;
		saveRoot = sqrt(input);
		squareSaveRoot = pow(saveRoot , 2);
//cout << input << " " << saveRoot << " " << squareSaveRoot << endl;
		if(input == 1 ) {
			cellX = 1;
			cellY = 1;
		}
		else if(squareSaveRoot == input){
			if(saveRoot & 1 ) {
				cellX = 1;
				cellY = saveRoot;
			}
			else{
				cellY = 1;
				cellX = saveRoot;
			}
		}
		else if(saveRoot % 2 != 0 ){
//cout << "ODD" <<endl;
			if((squareSaveRoot + saveRoot + 1 ) >= input ){
				cellY = saveRoot + 1;
				cellX = input - squareSaveRoot;
			}

			else {
				cellX = saveRoot + 1;
				cellY = pow(saveRoot+1 ,  2)  - input +1;
			}
		}
		else {
//		cout << "EVEN" << endl;
			if((squareSaveRoot + saveRoot + 1 ) >= input ){
				cellX = saveRoot + 1;
				cellY = input - squareSaveRoot;
			}

			else {
				cellY = saveRoot + 1;
				cellX = pow(saveRoot+1 ,  2)  - input +1;
			}
		}


		cout << "Case " << i+1 << ": " << cellX << " " << cellY << endl;
	}

	return 0;
}
