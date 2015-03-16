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

using namespace std;

int main (int argc, char const* argv[])
{
	int cases;
	string hudai;

	cin >> cases;
	getline(cin, hudai);


	for (unsigned int i = 0; i < cases; i += 1)
	{

		string start, end, monthStart, monthEnd,fucker;
		int startyear,endyear,startDate,endDate,startLeapYear, endLeapYear, resultLeapYear;

		cin >> monthStart >> startDate >> fucker >> startyear;
		cin >> monthEnd >> endDate >> fucker >> endyear;


		if (monthStart != "January" && monthStart != "February" ) startyear++;
		if(monthEnd == "January"  ) endyear -- ;
		else if(monthEnd == "February" && endDate < 29) endyear -- ;

		startLeapYear = (startyear-1) / 400 + (startyear-1) / 4 - (startyear-1) /100;
		endLeapYear = (endyear-1) / 400 + (endyear-1) / 4 - (endyear-1) / 100;


		resultLeapYear = endLeapYear - startLeapYear;
		if(endyear % 400 == 0 || (endyear % 4 == 0 && endyear % 100 != 0)) resultLeapYear++;
		cout << "Case " << i+1 << ": " << resultLeapYear << endl;
	}


	return 0;
}
