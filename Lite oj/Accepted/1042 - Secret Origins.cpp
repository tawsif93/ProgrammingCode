#include<iostream>

using namespace std;
long hakmemItem175(long value){

  // find the lowest one bit in the input
  long lowestBit = value & -value;

  // determine the leftmost bits of the output
  long leftBits = value + lowestBit;

  // determine the difference between the input and leftmost output bits
  long changedBits = value ^ leftBits;

  // determine the rightmost bits of the output
  long rightBits = (changedBits / lowestBit) >> 2;

  // return the complete output
  return (leftBits | rightBits);

}

int main() 
{
	int t,l; 
	long n,save;
	
	cin >> t;
	
	for (int i = 0; i < t; i += 1)
	{
		cin >> n;
		save = hakmemItem175(n);
		
		cout << "Case " << i+1 << ": " << save << endl;
	}

	return 0;
}
