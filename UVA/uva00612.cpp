#include<iostream>

using namespace std;

struct content
{
	string line;
	int count;
};

int main()
{
	int N;
	cin >> N;
	for(int i=0; i<N; i++)
	{
		int n, m;
		cin >> n >> m;
		content sequence[m];
		for(int j=0; j<m; j++)
		{
			cin >> sequence[j].line;
			sequence[j].count = 0;
			for(int k=0; k<sequence[j].line.length()-1; k++)
				for(int l=k+1; l<sequence[j].line.length(); l++)
					if(sequence[j].line[k] > sequence[j].line[l]) sequence[j].count++;
		}

		for(int j=0; j<m; j++)
			for(int k=j+1;k<m;k++)
				if(sequence[j].count > sequence[k].count)
				{
					content temp;
					temp.line = sequence[j].line; temp.count = sequence[j].count;
					sequence[j].line = sequence[k].line; sequence[j].count = sequence[k].count;
					sequence[k].line = temp.line; sequence[k].count = temp.count;
				}

		if(i!=0) cout << endl;
		for(int j=0; j<m; j++) cout << sequence[j].line << endl;
	}
	return 0;
}