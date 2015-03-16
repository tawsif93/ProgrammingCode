#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <istream>
#include<iomanip>
#include<cctype>
using namespace std;
#include<string>


int main()
{
	int test  ;
	cin >> test;
	string firstLine, secondLine,hudai;
	getline(cin,hudai);

	for (unsigned int i = 0; i < test; i += 1)
	{
    	getline(cin, firstLine);
		getline(cin, secondLine);
		firstLine.erase(remove(firstLine.begin(), firstLine.end(), ' '), firstLine.end());
		secondLine.erase(remove(secondLine.begin(), secondLine.end(), ' '), secondLine.end());

		for (unsigned int k = 0; k < firstLine.length(); k += 1) if(firstLine[k] <= 90) firstLine[k] += 32;
		for (unsigned int k = 0; k < secondLine.length(); k += 1) if(secondLine[k] <= 90) secondLine[k] += 32;

		sort( firstLine.begin(), firstLine.end() ) ;
		sort( secondLine.begin(), secondLine.end() ) ;

		if (firstLine== secondLine)
		{
			cout << "Case " << i+1 << ": Yes" << endl;
		}

		else cout << "Case " << i+1 << ": No" << endl;
	}
}
