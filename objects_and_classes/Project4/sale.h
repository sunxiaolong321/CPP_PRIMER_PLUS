#pragma once
#ifndef _SALE_CPP
#define _SALE_CPP

class sale
{
private:
	static const int QUARTERS = 4;
	double sales[QUARTERS];
	double average;
	double max;
	double min;
public:
	void setsale(const double ar[], int n);
	void setsales();
	void showsales();
};

#endif
