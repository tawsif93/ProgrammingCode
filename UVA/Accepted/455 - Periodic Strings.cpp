#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std ;

int main()
{
	int cases ;
	string hudai ;
	
	cin >> cases ;
	getline(cin, hudai );
	
	while(cases--)
	{
		int period=0 , count = 0 ;
		string input ;
		
		vector <int> divisor ;
		
						
		getline(cin , hudai) ;
		getline(cin ,input) ;
		
		for(int i = 1 ; i <= sqrt(input.length()) ;i++)
		{
			if(input.length() % i == 0) 
			{
				divisor.push_back(i);
				
				if((input.length()/i) != i && input.length()% (input.length()/i)==0) divisor.push_back(input.length()/i);
			}
		}
		sort(divisor.begin() , divisor.end());
		bool flag = false ;
		
		for(int i = 0 ; i < divisor.size() ; i++)
		{
			for(int j = 0 ; j < input.length() / divisor[i] ;j++)
			{
				string temp = input.substr(0, divisor[i]) ;
				
				if(temp != input.substr(j* divisor[i] , divisor[i])) break ;
				else if( (j+1) * divisor[i] == input.length() && temp == input.substr(j* divisor[i] , divisor[i])) flag = true ;
			}
			if(flag)
			{
				cout << divisor[i] << endl ;
				if(cases) cout << endl;
				break ;
			}
		}
		
				
	}
}
