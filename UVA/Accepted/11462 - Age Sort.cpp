#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	priority_queue<int> age;

	int numberOfPeople;
	vector<int> temp;

	while(scanf("%d",&numberOfPeople) != EOF)
	{
		for(int i =0; i < numberOfPeople; i++)
		{	
			int input;
			cin >> input;

			age.push(input);
		}

		for (int i = 0; i < numberOfPeople; ++i)
		{
			temp.push_back (age.top()) ;
			age.pop();
		}
		reverse(temp.begin(), temp.end());
		for (int i = 0; i < numberOfPeople; ++i)
		{
			cout << temp[i];
			if(i+1 != numberOfPeople) cout << " " ;
		}
		if(numberOfPeople != 0) cout << endl;
		temp.clear();
	}
	return 0;
}
