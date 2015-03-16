#include <map>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std ;


int main()
{
    int input ;

    map < int , int > mp ;
    vector< int > track ;

    while(scanf("%d" , &input)==1)
    {
        if(mp.find(input)== mp.end())track.push_back(input);
        mp[input]++;
    }

//    unique(track.begin() , track.end());

    for(int i = 0 ; i < track.size(); i++)
    {
        cout << track[i] << " " << mp[track[i]] << endl;
    }
}
