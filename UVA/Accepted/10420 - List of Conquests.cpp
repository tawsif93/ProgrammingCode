#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct data 
{
	string country ;
	int names;
};

void swap(data *a, data *b)
{ 
	data tmp; 
	tmp = *a; 
	*a = *b; 
	*b = tmp;
}

void bubbleSort(vector<data> &a , int size)
{ 
	int i, j; 
	for (i=0; i<size-1; i++)
	{ 
		for (j=size-1; j>i; j--) 
			if (a[j].country.compare(a[j-1].country) <  0) swap(&a[j], &a[j-1]); 
	} 
}
			 


int main()
{
	int cases ;
	cin >> cases;
	
	
	vector <data> country ;
	
	while(cases--)
	{
		bool flag = false;
		string countryName ;
		string hudai ;
		cin >> countryName ;
		getline(cin , hudai ) ;
		
		for(int i = 0 ; i < country.size() ; i++)
		{
			if(country[i].country == countryName)
			{
				country[i].names++ ;
				flag = true ;
				break ;
			}
		}
		
		if(!flag)
		{
			data temp ;
			
			temp.country = countryName;
			temp.names = 1 ;
			
			country.push_back(temp);
		}
		
		
	}

	bubbleSort(country , country.size());	
	
	for(int i = 0 ; i < country.size() ; i++)
	{
		cout << country[i].country << " " << country[i].names << endl ;
	}
	
}
