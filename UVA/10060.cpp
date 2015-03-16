#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{
	long int year;

	while( scanf("%ld",&year) != EOF )
	{
	
		if((year % 4 == 0) &&  ( (year % 100 !=0) || (year % 400 ==0) ) )
		{		
			cout << "This is leap year.\n";
	
			if( year % 15 == 0)	cout << "This is huluculu festival year.\n";			
	
			if(year % 55 == 0)		cout << "This is buluculu festival year.\n";
		}
		
		else if( year % 15 == 0)	cout << "This is huluculu festival year.\n";
		
		
		else cout << "This is an ordinary year.\n";
		
		cout << endl;
		
	}

	return 0;

}
