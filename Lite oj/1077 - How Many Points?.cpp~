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

using namespace std;

int main (int argc, char const* argv[])
{
	int cases;

	long long int x1,x2,y1,y2, Y , X ,begin;
	long long int count;

	cin >> cases;

	for (unsigned int i = 0; i < cases; i += 1)
	{
		cin >> x1 >> y1 >> x2 >> y2 ;

		count = 0 ;
		X = x2-x1;
		Y = y2-y1;

		if(X < 0) X *= -1;
		if(Y < 0) Y *= -1;

		if(x1==x2){
			count  = Y ;
		}

		else if (y1 == y2){
			count  = X ;
		}

		else if ( (y1-y2)/(x1-x2)==1 && (y1-y2) % (x1-x2)== 0  ){
			count = X;
		}

		else {
			int temp = X;
			if(Y >= X){
				begin = X;
			}
			else begin = Y;
			bool flag = false;

			for(int j = begin; j > 1; j--){
				if (Y % j == 0 && X % j == 0){
					X /= j;
					count = temp / X;
					flag = true;
					break;
				}
			}

			if(!flag)  count++;
		}


		cout << "Case " << i+1 << ": " << count+1 << endl;

	}

	return 0;
}
