#pragma once
#ifndef COMPLEX_H_
#define COMPLEX_H_


#include <iostream>

class complex
{
private:
	double real_number;
	double imaginary_number;
public:
	complex();
	complex(double real,double imaginary = 0);
	void reset();
	complex operator~()const;
	complex operator+(complex&m)const;
	complex operator-(complex&m)const;
	complex operator*(complex&m)const;
	complex operator*(double n)const;
	friend complex operator*(double n,const complex&m);
	friend std::istream&operator>>(std::istream&is, complex&m);
	friend std::ostream&operator<<(std::ostream&os, const complex&m);
	~complex();
};

#endif // !COMPLEX_H_
