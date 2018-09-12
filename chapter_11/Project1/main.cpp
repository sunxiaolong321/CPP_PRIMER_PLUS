//main.cpp
#include <iostream>	
#include "distance.h"
#include <ctime>
#include <fstream>
#include <cstdlib>
/*
int main()
{
	using namespace std;
	mytime weeding(4, 35);
	mytime waxing(2, 47);
	mytime total;
	mytime diff;
	mytime adjusted;

	cout << "weeding time = ";
	weeding.show();
	cout << endl;
	cout << "total work time = ";
	waxing.show();
	cout << endl;

	cout << "total work time = ";
	total = weeding + waxing;
	total.show();
	cout << endl;

	diff = weeding - waxing;
	cout << "weeding time - waxing time =";
	diff.show();
	cout << endl;

	adjusted = total * 1.5;
	cout << "adjusted work time = ";
	adjusted.show();
	cout << endl;
}
*/

int main()
{
	using namespace std;
	using DISTANCE::distance;
	srand(time(0));
	double direction;
	distance step;
	distance result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream fout;
	fout.open("distance.txt");

	cout << "enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "enter step lengh: ";
		if (!(cin >> dstep))
			break;

		fout << "target distance: " << target << ". ";
		fout << "step size: " << dstep << endl;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, distance::POL);
			result = result + step;
			fout << step << ": " << result << endl;
			steps++;
		}
		cout << "after " << steps << " steps. the subject " << "has the following locaion:\n";
		cout << result << endl;
		result.polar_mode();
		cout << "or\n" << result << endl;
		cout << "average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "enter target distance (q to quit): ";
	}
	cout << "bay!\n";
}
