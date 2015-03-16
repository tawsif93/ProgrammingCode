#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int input ;

	while(scanf("%d", &input) != EOF) 
	{
		int array[input], count=0;

		for (int i = 0; i < input ; ++i)
		{
			cin >> array[i];
		}

		for(int i = 0 ; i < input; i++)
		{
			for(int j = i+1 ; j <input ; j++)
			{
				if(array[i] > array[j] )
				{
					count++;
				}
			}
		}

		cout << "Minimum exchange operations : " << count << endl;
	}
}