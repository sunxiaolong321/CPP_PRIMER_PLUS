#include "mytime.h"
#include <iostream>


mytime::mytime()
{
	hours = minutes = 0;
}

mytime::mytime(int h, int m)
{
	hours = h;
	minutes = m;
}

void mytime::addmin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void mytime::addhr(int h)
{
	hours += h;
}

void mytime::reset(int h, int m)
{
	hours = h;
	minutes = m;
}

mytime mytime::operator+(const mytime & t) const
{
	mytime sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours;
	sum.minutes %= 60;
	return sum;
}

mytime mytime::operator-(const mytime & t) const
{
	mytime diff;
	int tot1, tot2;
	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;
	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

mytime mytime::operator*(double t) const
{
	mytime result;
	long totalminutes = hours * t * 60 + minutes * t;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;

}

void mytime::show() const
{
	std::cout << "tafget distance " << hours << minutes << " minutes. ";
}


mytime::~mytime()
{
}
