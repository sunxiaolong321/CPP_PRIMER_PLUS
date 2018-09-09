#include "move.h"
#include <iostream>


move::move(double a,double b)
{
	x = a;
	y = b;
}

void move::showmove() const
{
	std::cout << "(" << x << "," << y << ")" << std::endl;
}


move::~move()
{
}

move move::add(const move&m)const
{
	move n = move(x + m.x, y + m.y);
		return n;
}

void move::reset(double a, double b)
{
	x = a;
	y = b;
}