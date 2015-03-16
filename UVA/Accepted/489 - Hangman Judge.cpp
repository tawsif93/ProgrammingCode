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
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	string mainString , inputString  , hudai ;
	int cases ;

	while(cin >> cases && cases != -1) {
		
		cout << "Round " << cases << endl;
		vector < char> wrongGuesses ;
	    
	    getline(cin , hudai );
	    
	    cin >> mainString >> inputString ;

	    for (int i = 0; i < inputString.length() ; )
	    {
	    	bool flag = false ;

	    	for (int j = 0; j < mainString.length() ; )
	    	{
	    		if( mainString[j] == inputString[i] && !mainString.empty() )
	    		{ 
	    			mainString.erase(mainString.begin()+j) ;
	    			flag = true ;
	    		}
	    		else j++;
	    	}

	    	if(!flag) 
	    	{
	    		bool exist = false ;

	    		for (int j = 0; j < wrongGuesses.size() ; ++j)
	    		{
	    			if(wrongGuesses[j] == inputString[i]) exist = true ;

	    		}

	    		if(!exist) wrongGuesses.push_back(inputString[i]);
	    	}

	    	inputString.erase(inputString.begin()+i);

	    	if(mainString.empty()) 
	    	{
	    		cout << "You win." << endl ;
	    		break;
	    	}
	    	else if ( !mainString.empty () && wrongGuesses.size() == 7)
	    	{
	    		cout << "You lose." << endl ;
	    		break;
	    	}
	    	else if (!mainString.empty() && inputString.empty() ) 
	    	{
	    		cout << "You chickened out." << endl;
	    		break;
	    	} 
	    }
	}
	return 0;
}
