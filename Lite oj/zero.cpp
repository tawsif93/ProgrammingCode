/*************************/
/* Fazle MOhammed Tawsif */
/*      BSSE 0628        */
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
#include <list>
#include <stack>
#include <queue>

#define MAX 100000000
using namespace std;


int main (int argc, char const* argv[])
{

	int cases;
	unsigned long int *zero  , zeroCount= 5, N;
	cin >> cases;
	zero = new unsigned long int [MAX+1];
	zero[0] = 0;

	for (unsigned int i = 1; i <=MAX;)
	{

		if(zeroCount % 48828125 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = 0;
			zero[i+3] = 0;
			zero[i+4] = 0;
			zero[i+5] = 0;
			zero[i+6] = 0;
			zero[i+7] = 0;
			zero[i+8] = 0;
			zero[i+9] = 0;
			zero[i+10] = zeroCount;
			i+= 11;
			zeroCount +=5;
		}

		else if(zeroCount % 9765625 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = 0;
			zero[i+3] = 0;
			zero[i+4] = 0;
			zero[i+5] = 0;
			zero[i+6] = 0;
			zero[i+7] = 0;
			zero[i+8] = 0;
			zero[i+9] = zeroCount;
			i+= 10;
			zeroCount +=5;
		}


		else if(zeroCount % 1953125 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = 0;
			zero[i+3] = 0;
			zero[i+4] = 0;
			zero[i+5] = 0;
			zero[i+6] = 0;
			zero[i+7] = 0;
			zero[i+8] = zeroCount;
			i+= 9;
			zeroCount +=5;
		}

		else if(zeroCount % 390625 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = 0;
			zero[i+3] = 0;
			zero[i+4] = 0;
			zero[i+5] = 0;
			zero[i+6] = 0;
			zero[i+7] = zeroCount;
			i+= 8;
			zeroCount +=5;
		}

		else if(zeroCount % 78125 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = 0;
			zero[i+3] = 0;
			zero[i+4] = 0;
			zero[i+5] = 0;
			zero[i+6] = zeroCount;
			i+= 7;
			zeroCount +=5;
		}

		else if(zeroCount % 15625 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = 0;
			zero[i+3] = 0;
			zero[i+4] = 0;
			zero[i+5] = zeroCount;
			i+= 6;
			zeroCount +=5;
		}

		else if(zeroCount % 3125 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = 0;
			zero[i+3] = 0;
			zero[i+4] = zeroCount;
			i+= 5;
			zeroCount +=5;
		}

		else if(zeroCount % 625 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = 0;
			zero[i+3] = zeroCount;
			i+= 4;
			zeroCount +=5;
		}

		else if(zeroCount % 125 == 0) {
			zero[i] = 0;
			zero[i+1] = 0;
			zero[i+2] = zeroCount;
			i+= 3;
			zeroCount +=5;

		}
		else if(zeroCount % 25 == 0) {
			zero[i] = 0;
			zero[i+1] = zeroCount;
			i+= 2;
			zeroCount +=5;

		}
		else {
			zero[i] = zeroCount;
			i++;
			zeroCount +=5;

		}
	}

	for (unsigned int i = 0; i < cases; i += 1)
	{
		cin >> N;
		if ( zero[N] > 100000000/2 ) cout  << "Case " << i+1 << ": "<< zero[N] - 5 << endl;
		else if(zero[N] != 0 ) cout  << "Case " << i+1 << ": "<< zero[N] << endl;
 		else cout << "Case " << i+1 << ": impossible"<< endl;

	}
//	delete[] zero;


	return 0;
}
