#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int n; cin >> n; 
	string expression;
	getline(cin,expression);
	
	for(int j=0; j<n; j++)
	{
		getline(cin,expression);
		stack <char> lefts;
		bool flag = true;
		for(int i=0; i<expression.length(); i++)
		{
			if(expression[i] == '(' || expression[i] == '[') lefts.push(expression[i]);

			else if(lefts.empty())
			{
				flag = false;
				break;
			}

			else
			{
				char top = lefts.top();
				if((expression[i] == ')' && top == '(') || (expression[i] == ']' && top == '[')) lefts.pop();
				else
				{
					flag = false;
					break;
				}
			}
		}

		if(flag && lefts.empty()) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}