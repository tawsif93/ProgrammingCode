#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <list>
#include <cctype>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	string a , temp ;
	vector < string > saved  , reviewed ;

	while(cin >> a && a != "#") {
	    saved.push_back(a);
	}

	for (int i = 0; i < saved.size() ; )
	{
		bool flag = false ;
		temp = saved[i];

		for(int j = 0 ; j < temp.size() ;j++)
		{
			temp[j]= tolower(temp[j]);
		}

		sort(temp.begin() , temp.end());
		
		for (int j = 0; j < saved.size(); ++j)
		{
			if (j== i )
			{
				j++;
			}
			if (j == saved.size() ) break;

			string temp2 = saved[j] ;

			for(int k = 0 ; k < temp2.size() ;k++)
			{
				temp2[k]= tolower(temp2[k]);
			}
			
			sort(temp2.begin() , temp2.end());

			if(temp == temp2) 
			{
				flag = true;
				break;
			}
		}

		if(!flag) 
		{
			reviewed.push_back(saved[i]);
			saved.erase(saved.begin()+i);
		}

		else i++ ;

	}

	sort(reviewed.begin() , reviewed.end());
	for (int i = 0; i < reviewed.size(); ++i)
	{
		cout << reviewed[i] << endl;
	}

	return 0;
}
