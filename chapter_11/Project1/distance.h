#pragma once
#ifndef DISTANCE_H_
#define DISTANCE_H_
#include <iostream>

namespace DISTANCE
{
	class distance
	{
	public:
		enum Mode{ RECT, POL };
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		distance();
		distance(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		double xval()const { return x; }
		double yval()const { return y; }
		double magval()const { return mag; }
		double angval()const { return ang; }
		void polar_mode();
		void rect_mode();
		distance operator+(const distance&b)const;
		distance operator-(const distance&b)const;
		distance operator-()const;
		distance operator*(double n)const;
		friend distance operator*(double n, const distance&a);
		friend std::ostream&operator<<(std::ostream&os, const distance&v);
		~distance();
	};
}
#endif //distance.h
