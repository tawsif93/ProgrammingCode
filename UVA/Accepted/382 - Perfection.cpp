#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int cheak(int input)
{	
	int counter = 0;
	for(unsigned i = 1; i <= input/2 ; ++i) {
		if(input % i == 0 ) 
		{
			counter += i;

		}
	}
	return counter;
}

int main()
{
	vector<long long int> number , perfection;
	long long int input;

	while((scanf("%lld",&input)) == 1)
	{
		
		number.push_back(input);
		if(input == 0 ) break;
		perfection.push_back(cheak(input));
	}

	cout << "PERFECTION OUTPUT" << endl;
	for(int i = 0 ; i < number.size(); i++)
	{
		if (number[i] == 0) cout << "END OF OUTPUT" << endl ;
		else if( number[i] == perfection[i]) printf("%5lld  PERFECT\n" ,number[i]);
		else if( number[i] < perfection[i]) printf("%5lld  ABUNDANT\n" ,number[i]);
		else if( number[i] > perfection[i]) printf("%5lld  DEFICIENT\n" ,number[i]);
	}
}