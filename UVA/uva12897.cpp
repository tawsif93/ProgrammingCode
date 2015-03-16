#include<iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	for(int i=0; i<n; i++)
	{
		string line;
		cin >> line;
		int m; cin >> m;
		char a,b;
		for(int j=0; j<m; j++)
		{
			 cin >> a >> b;
			 for(int k=0; k<line.length(); k++) if(line[k]==b) line[k]=a;
		}
		cout << line << endl;
	}
	return 0;
}