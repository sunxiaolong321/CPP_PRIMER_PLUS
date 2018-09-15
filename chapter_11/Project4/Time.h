#pragma once
#ifndef TIME_H_
#define TIME_H_

#include <iostream>

class TIME
{
private:
	int hours;
	int minutes;
public:
	TIME();
	TIME(int h, int m = 0);
	void addmin(int m);
	void addhr(int h);
	void reset(int h, int m);
	friend TIME operator+(const TIME&m, const TIME&t);
	friend TIME operator-(const TIME&m, const TIME&t);
	friend TIME operator*(const TIME&m, double t);
	friend TIME operator*(double m, const TIME&t)
	{
		return t * m;
	}
	friend std::ostream&operator<<(std::ostream&os, const TIME&t);
};

#endif // !TIME_H_

