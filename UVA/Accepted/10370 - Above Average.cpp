#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int numberOfStudent;
		double totalMark = 0;
		cin >> numberOfStudent;
		vector <int> marks;

		for (int i = 0; i < numberOfStudent; ++i)
		{
			int mark;
			cin >> mark;
			totalMark += mark;
			marks.push_back(mark);
		}

		double average = totalMark/numberOfStudent;
		int passedStudent = 0;

		for (int i = 0; i < numberOfStudent; ++i)
		{
			if((double)marks[i] > average) passedStudent++;
		}

		printf("%.3lf%\n", 100* passedStudent/(double)numberOfStudent);

	}
	return 0;
}
