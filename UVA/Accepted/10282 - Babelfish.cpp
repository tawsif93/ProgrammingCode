#include <map>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>

using namespace std ;

int main()
{
    map< string , string > mp_str ;

    string  input , english , foreign ;



    while (getline(cin , input) && input != "")
    {
        istringstream iss(input) ;

        iss >> english ;
        iss >> foreign ;

        mp_str[foreign] = english;

    }

    while(cin >> input )
    {
        if(mp_str.find(input) == mp_str.end()) cout << "eh" << endl;
        else cout << mp_str[input] << endl ;
    }

}
