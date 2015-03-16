#include<iostream>
#include<vector>
using namespace std;

int main() {
    unsigned long int n, caseno = 0, cases;
	unsigned long int a, b, c, d, e, f;
	unsigned long calculate;
	vector <unsigned long> input;
    cin >> cases;
    
    while( cases-- ) {
        cin >> a >> b >> c >> d >> e >> f >> n ;
		input.clear();
		calculate = 0 ;
		
		input.push_back(a);
		input.push_back(b);
		input.push_back(c);
		input.push_back(d);
		input.push_back(e);
		input.push_back(f);

			for(int i = 6 ; i <=n ; i++) {
					calculate = (input[i-1] + input[i-2]+input[i-3]+input[i-4]+input[i-5]+input[i-6])%10000007 ;
					input.push_back(calculate); 
			}
		
        cout << "Case " << ++caseno << ": " << input[n] % 10000007 << endl;
    }
    return 0;
}


