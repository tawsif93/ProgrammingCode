#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main ()
{
	int t,k=0;
	long int p,l ;
	long count, q;

	cin >> t;

	vector <int> listOne;


	for ( int i = 0 ; i < t ; i++ )
	{
		cin >> p >> l ;
		q = p - l;
		long a = 0;
		cout << "Case " << i+1 << ":" ;
		listOne.clear();
		int rt = sqrt (q);

		for(int j = 1 ; j <= rt ; j++ )
		{
			if (q % j==0 )
			{
				if (j > l) listOne.push_back(j);
				if (j != q/j ) {
					if( q/j > l) listOne.push_back(q/j);
					}
			}

		}

		sort(listOne.begin(),listOne.end());
		for( long j = 0 ; j <listOne.size(); j++ )
		{
			cout << " "<< listOne[j] ;
		}



		if (listOne.empty()) cout << " impossible" << endl;
		else cout << endl;
	}
	return 0;
}
