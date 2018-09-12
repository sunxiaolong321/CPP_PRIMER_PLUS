//mian.cpp
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vector.h"

const int N = 5;
int main()
{
	using namespace std;
	using VECTOR::vector;
	srand(time(0));     // seed random-number generator
	double direction;
	vector step;
	vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int max, min, sum;
	max = min = sum = 0;
	std::cout << "Enter target distance  ";
	cin >> target;
	std::cout << "Enter step length: ";
	cin >> dstep;
	for (int i = 0; i < N; i++)
	{
		while (result.magval() < target)	//step++
		{
			direction = rand() % 360;
			step.reset(dstep, direction, vector::POL);
			result = result + step;
			steps++;
		}
		if (steps > max)
			max = min = steps;
		if (steps < min)
			min = steps;
		sum += steps;
		std::cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		std::cout << result << endl;
		result.polar_mode();
		std::cout << " or\n" << result << endl;
		std::cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
	}
	std::cout << "the max step is: " << max << "\n the min step is: " << min << endl;
	std::cout << "the average step is" << sum / N << endl;
	std::cout << "Bye!\n";
	/* keep window open
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cin.get();
	*/
	return 0;
}