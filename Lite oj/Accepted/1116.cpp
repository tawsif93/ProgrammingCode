#include<iostream>

using namespace std;

int main()
{
	int t;
	long long m,n;
	
	long long w;
	
	cin >> t;
	
	for (int i =0 ; i < t; i++ ) 
	{
		cin >> w;
		
		m = 0 ;
		n = 0;
		
		if( w & 1 ) cout << "Case " << i+1 <<": Impossible"<< endl;
		else {
			for ( long j = 2 ; j <= w/2+2 ; j += 2 ) 
			{
				
				if ( w % j == 0  && ((w/j)% 2 != 0 ))
				{
					m = j;
					n = w/j;					
					break;
				}
				
			}
			
			if(m && n ) 
			{
				cout << "Case " << i+1 <<": " << n << " " << m << endl;
			}			
			else if (!(m && n))
			{
				cout << "Case " << i+1 <<": Impossible"<< endl;
			}		
		}
	}	
}
