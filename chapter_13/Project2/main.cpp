#include <iostream>
#include "Cd.h"
using namespace std;

void Bravo(const Cd & disk);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	Cd * pcd = &c1;

	cout << "Using object directly: \n";
	c1.report();
	c2.report();

	cout << "Using type cd * pointer to objects: \n";
	pcd->report();
	pcd = &c2;
	pcd->report();

	cout << "Calling a function with a Cd reference argument: \n";
	Bravo(c1);
	Bravo(c2);

	cout << "Testing assignment: ";
	Classic copy;
	copy = c2;
	copy.report();

	return 0;
}

void Bravo(const Cd & disk)
{
	disk.report();
}