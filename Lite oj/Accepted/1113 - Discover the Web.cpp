#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t,controller; 
	
	vector<string> browser;
	vector <string>::iterator It;
	string blouse, bra,hudai;
	cin >> t; 
	getline(cin, hudai);
	
	
	for (unsigned int i = 0; i < t; i += 1)
	{
		browser.clear();
		controller = 0;
		blouse = "http://www.lightoj.com/";
		browser.push_back(blouse);
		It = browser.begin();

		cout << "Case " << i+1 << ":" << endl;

		for(;;){
			cin >> bra ;
			if( bra == "VISIT" ) {
					browser.erase(It+1 , browser.end());
				cin >> blouse;
				browser.push_back(blouse);
				It = browser.end()-1;
			cout << *It << endl;
			}
		
			else if (bra == "BACK") {
				if(browser.size() > 1 && It > browser.begin()){
					It--;
					cout << *It << endl;

				}
				else if(It== browser.begin() ) cout << "Ignored" << endl;
			}
				 
			else if (bra == "FORWARD") {
				if( It!= browser.end()-1 ) {
					It++;
			cout << *It << endl;

				}
				else  cout << "Ignored" << endl;
			}
			
			else if (bra == "QUIT") break;
			
		}
			
	}
}
