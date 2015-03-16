#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main() {

	int t,dec[4],decB[4];
	long input;
	char ip[20], a[4][9];
	
	char binary[40];
	
	cin >> t;
	getchar();
	
	for(int i =0; i < t; i++) {
		scanf("%s" , ip);
		scanf("%s" , binary);
		
		for(int k= 0;k < strlen(ip) ; k++) if (ip[k] == '.') ip[k] = ' ';
		for(int k= 0;k < strlen(binary) ; k++) if (binary[k] == '.') binary[k] = ' ';
		
		sscanf(ip,"%d  %d  %d %d", &dec[0],&dec[1],&dec[2],&dec[3]);
		sscanf(binary,"%s  %s  %s %s", a[0],a[1],a[2],a[3]);
		int count = 0;
		
		for(int k= 0;k < 4 ; k++) decB[k] = 0;
		
		for(int k= 0;k < 4 ; k++) {
			for(int l = 7; l >= 0 ; l-- ) {
				decB[k] += (a[k][l] -'0') * pow(2 , count);
				count++;
			}
			count =0;
		}
		
		if(dec[0]== decB[0] && dec[1]== decB[1] && dec[2]== decB[2] && dec[3]== decB[3] ) cout << "Case " << i+1 << ": Yes" << endl;
		else cout << "Case " << i+1 << ": No" << endl;
	}
}
	

