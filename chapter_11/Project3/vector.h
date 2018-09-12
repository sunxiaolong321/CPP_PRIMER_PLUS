#pragma once
#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace VECTOR
{
class vector
{
public:
	enum Mode{ RECT,POL };
	//rect for rectangular, pol for polar modes
private:
	double x;	//horizontal of value
	double y;	//vertical value
	double mag;	//length of vector
	double ang;	//direction of vector in degrees
	Mode mode;  
	void set_mag();
	void set_ang();
	void set_x();
	void set_y();
public:
	vector();
	vector(double n1, double n2, Mode form = RECT);
	void reset(double n1, double n2, Mode form = RECT);
	~vector();
	double xval()const { return x; };
	double yval()const { return y; };
	double magval()const { return mag; };
	double angval()const { return ang; };
	void polar_mode();
	void rect_mode();
	vector operator+(const vector&b)const;
	vector operator-(const vector&b)const;
	vector operator-()const;
	vector operator*(double n)const;
	friend vector operator*(double n, const vector&a);
	friend std::ostream&operator<<(std::ostream&os, const vector&v);
};

//end namespace VECTOR
}
#endif	//vector.h

