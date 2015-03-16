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
	long long int *zero;
	cin >> cases;
	zero = new long long int [MAX];
	long long int counterFive,counterTwo, min,N,k,lastCount;

	zero[0] = 0;

	for(long long int i = 1 ; i <= MAX/10 ; i++){
		lastCount = 0;
		counterFive = 0;
		for(long long int j=5; i/j>=1; j *= 5){
			counterFive += i /j;
		}

		if(counterFive> lastCount) zero [i] = counterFive;
		else zero [i]=0;
	}

/*	long long int begin,end ,arraySize,mid;

	for(int t = 0 ; t < cases; t++){
		begin = 0 ;
 		end = 100000 -1;
 		mid = (begin+ end)/2;
		cin >> N;

 		while(begin <= end && N != zero[mid]){
 			if(N < zero[mid]) end = mid - 1;
 			else begin = mid + 1;

 			mid = (begin + end) / 2 ;
 		}

 		if(zero[mid] == N) {
 			cout  << "Case " << t+1 << ": "<< mid << endl;
 		}

 		else {
 			//item = NULL;
		 		cout << "Case " << t+1 << ": impossible"<< endl;
 		}

	}*/


	for (int i= 610 ; i <= 620; i++) cout << i <<" ZEro " << zero[i] << endl;

	delete[] zero;

	return 0;
}
