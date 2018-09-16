#include "complex.h"

complex::complex()
{
	real_number = imaginary_number = 0;
}

complex::complex(double real,double imaginary)
{
	real_number = real;
	imaginary_number = imaginary;
}

void complex::reset()
{
	real_number = imaginary_number = 0;
}

complex complex::operator~() const
{
	complex function;
	function.imaginary_number = 0 - imaginary_number;
	function.real_number = real_number;
	return function;
}


complex complex::operator+(complex & m) const
{
	complex add;
	add.real_number = real_number + m.real_number;
	add.imaginary_number = imaginary_number + m.imaginary_number;
	return add;
}

complex complex::operator-(complex & m) const
{
	complex sub;
	sub.real_number = real_number - m.real_number;
	sub.imaginary_number = imaginary_number - m.imaginary_number;
	return sub;
}

complex complex::operator*(complex & m) const
{
	complex MUL;
	MUL.real_number = real_number * m.real_number - imaginary_number * m.imaginary_number;
	MUL.imaginary_number = real_number * m.imaginary_number + m.real_number*imaginary_number;
	return MUL;
}

complex complex::operator*(double n) const
{
	return complex(n*real_number,n*imaginary_number);
}


complex::~complex()
{
}

complex operator*(double n, const complex & m)
{
	return m * n;
}

std::istream & operator>>(std::istream & is, complex & m)
{
	std::cout << "real: ";
	is >> m.real_number;
	std::cout << "imaginary: ";
	is >> m.imaginary_number;
	return is;
	// TODO: 在此处插入 return 语句
}

std::ostream & operator<<(std::ostream & os, const complex & m)
{
	os <<  "( " << m.real_number << ", " << m.imaginary_number << "i )";
	return os;
	// TODO: 在此处插入 return 语句
}
