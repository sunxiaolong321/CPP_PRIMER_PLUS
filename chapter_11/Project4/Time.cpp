//time.cpp
#include "Time.h"

TIME::TIME()
{
	hours = minutes = 0;
}

TIME::TIME(int h, int m)
{
	hours = h;
	minutes = m;
}

void TIME::addmin(int m)
{
	minutes += m;
	hours += m / 60;
	minutes &= 60;
}

void TIME::addhr(int h)
{
	hours += h;
}

void TIME::reset(int h, int m)
{
	hours = h;
	minutes = m;
}

TIME operator+(const TIME & m, const TIME & t)
{
	TIME sum;
	sum.minutes = m.minutes + t.minutes;
	sum.hours = m.hours + t.hours;
	sum.hours += sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

TIME operator-(const TIME & m, const TIME & t)
{
	TIME sub;
	int t1, t2;
	t1 = m.minutes + 60 * m.hours;
	t2 = t.minutes + 60 * t.hours;
	sub.hours += (t1 - t2) / 60;
	sub.minutes = (t1 - t2) % 60;
	return sub;
}

TIME operator*(const TIME & m, double t)
{
	TIME ADD;
	int t1;
	t1 = m.hours*t * 60 + m.minutes*t;
	ADD.hours = t1 / 60;
	ADD.minutes = t1 % 60;
	return ADD;
}

std::ostream & operator<<(std::ostream & os, const TIME & t)
{
	os << t.hours << " hours. " << t.minutes << " minutes";
	return os;
		// TODO: 在此处插入 return 语句
}

