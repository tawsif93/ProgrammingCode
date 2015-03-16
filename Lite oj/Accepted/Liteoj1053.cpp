#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int t;

	cin >> t;
	
	if( t<= 200) 
	{
	
		long int a[t] ,b[t] ,c[t] ;
	
		for(int i=0; i<t; i++ ) 
		{
			cin >> a[i] >> b[i] >> c[i] ;		
		}
	
		for(int i=0; i<t; i++ ) 
		{
		
			if( ( pow( a[i],2) + pow(b[i],2) ) == pow( c[i], 2) ) cout << "Case " << i+1 << ": yes" << endl;
			
			else if( ( pow( c[i], 2) + pow(b[i],2) ) == pow( a[i],2) ) cout << "Case " << i+1 << ": yes" << endl;
			
			else if( ( pow( c[i], 2) + pow( a[i],2) ) == pow(b[i],2) ) cout << "Case " << i+1 << ": yes" << endl;
				
			else cout << "Case " << i+1 << ": no" << endl;
	
		}
	}
		
	return 0;
}


