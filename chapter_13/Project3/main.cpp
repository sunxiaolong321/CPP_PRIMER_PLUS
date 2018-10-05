#include <iostream>
#include "base.h"

int main()
{
	using std::cout;
	using std::endl;

	basedma shirt("Portrabelly", 8);
	lackdma balloon("red", "Blumpo", 4);
	hasdma map("Mercator", "Buffalo Kyes", 5);
	cout << shirt << endl;
	cout << balloon << endl;
	cout << map << endl;
	lackdma balloon2(balloon);
	hasdma map2;
	map2 = map;
	cout << balloon2 << endl;
	cout << map2 << endl;

	base * pts[3];
	pts[0] = &shirt;
	pts[1] = &balloon;
	pts[2] = &map;

	for (int i = 0; i < 3; ++i)
		cout << *pts[i] << endl;
	for (int i = 0; i < 3; ++i)
		pts[i]->view();

	return 0;
}