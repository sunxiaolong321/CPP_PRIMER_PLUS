#include "distance.h"
#include <cmath>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace DISTANCE
{
	const double rad_to_deg = 45.0 / atan(1.0);
	
	void distance::set_mag()
	{
		mag = sqrt(x*x + y * y);
	}

	void distance::set_ang()
	{
		if (x == 0.0&&y == 0.0)
			ang = 0;
		else
			ang = atan2(y, x);
	}

	void distance::set_x()
	{
		x = mag * cos(ang);
	}

	void distance::set_y()
	{
		y = mag * sin(ang);
	}

	distance::distance()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	distance::distance(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "incorrect 3rd argument to distance() -- ";
			cout << "distance set to 0\n";
			x = y = mag = ang = 0.0;
		}
	}

	void distance::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "incorrect 3rd argument to distance() -- ";
			cout << "distance set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	void distance::polar_mode()
	{
		mode = POL;
	}

	void distance::rect_mode()
	{
		mode = RECT;
	}

	distance distance::operator+(const distance&b)const
	{
		return distance(x + b.x, y + b.y);
	}

	distance distance::operator-(const distance&b)const
	{
		return distance(x - b.x, y - b.y);
	}

	distance distance::operator-()const
	{
		return distance(-x, -y);
	}

	distance distance::operator*(double n)const
	{
		return distance(n*x, n*y);
	}

	distance operator*(double n, const distance&a)
	{
		return a * n;
	}

	std::ostream&operator<<(std::ostream&os, const distance &v)
	{
		if (v.mode == distance::RECT)
			os << "(x,y) = (" << v.x << " , " << v.y << ")";
		else if (v.mode == distance::POL)
		{
			os << "(m,a) = (" << v.mag << ". "
				<< v.ang*rad_to_deg << ")";
		}
		else
			os << "distance object mode is invalid";
		return os;
	}
	distance::~distance()
	{
	}
}

//end namespace DISTANCE