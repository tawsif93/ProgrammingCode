#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t ;

	unsigned long int n,m,summation;

	cin >> t;

	for (unsigned int i = 0; i < t; i += 1)
	{
		cin >> n >> m ;



		summation = m * n /2;

		cout << "Case " << i+1 << ": " << summation << endl;

	}

}
