#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std ;

int main()
{
	string a;
	char mirror[22][2] = {
		{ 'A' , 'A' } ,
		{ 'M' , 'M' } ,
		{ 'Y' , 'Y' } ,
		{ 'Z' , '5' } ,
		{ 'O' , 'O' } ,
		{ '1' , '1' } ,
		{ '2' , 'S' } ,
		{ 'E' , '3' } ,
		{ '3' , 'E' } ,
		{ 'S' , '2' } ,
		{ '5' , 'Z' } ,
		{ 'H' , 'H' } ,
		{ 'T' , 'T' } ,
		{ 'I' , 'I' } ,
		{ 'U' , 'U' } ,
		{ 'J' , 'L' } ,
		{ 'V' , 'V' } ,
		{ '8' , '8' } ,
		{ 'W' , 'W' } ,
		{ 'L' , 'J' } ,
		{ '0' , '0' } ,
		{ 'X' , 'X' } 
	} ;

	while(cin >> a) {

		string temp = a  , temp2 = ""  ;

		reverse(temp.begin() , temp.end());
		
		for(int j = 0 ; j < a.length() ; j++)
		{	
			for (int i = 0; i < 22; ++i)
			{
				if(temp[j] == mirror[i][0])
				{
					temp2 += mirror[i][1];
					break;
				}
			}
		}

		if(a == temp && temp2 == a ) cout <<  a << " -- is a mirrored palindrome." << endl << endl ;
		else if( a != temp && temp2 == a) cout <<  a << " -- is a mirrored string." << endl << endl ;
		else if(a == temp && temp2 != a) cout <<  a << " -- is a regular palindrome." << endl << endl ;
		else cout <<  a << " -- is not a palindrome." << endl << endl ;

	}
}

