#include <iostream>
#include "move.h"

int main()
{

	move m1;
	m1.showmove();
	m1.reset(2, 3);
	m1.showmove();
	move m2 = move(3, 1);
	m2.showmove();
	move m3;
	m3 = m2.add(m1);
	m3.showmove();

	return 0;
}