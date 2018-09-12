#include "vector.h"
#include <cmath>
using std::sqrt;
using std::cos;
using std::sin;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double rad_deg = 45.0 / atan(1.0);

	void vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}
	void vector::set_ang()
	{
		if (x == 0 && y == 0)
			ang = 0;
		else
			ang = atan2(y, x);
	}

	void vector::set_x()
	{
		x = mag * cos(ang);
	}

	void vector::set_y()
	{
		y = mag * sin(ang);
	}


	vector::vector()
	{
		x = y = mag = ang = 0.0;
	}

	vector::vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (mode == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (mode = POL)
		{
			mag = n1;
			ang = n2 / rad_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "incorrect 3rd argument to vector() -- ";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	void vector::reset(double n1, double n2, Mode form)
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
			ang = n2 / rad_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}
	void vector::polar_mode()
	{
		mode = POL;
	}

	void vector::rect_mode()
	{
		mode = RECT;
	}

	vector::~vector()
	{
	}

// operator overloading
 // add two Vectors
	vector vector::operator+(const vector & b) const
	{
		return vector(x + b.x, y + b.y);
	}

	// subtract Vector b from a
	vector vector::operator-(const vector & b) const
	{
		return vector(x - b.x, y - b.y);
	}

	// reverse sign of Vector
	vector vector::operator-() const
	{
		return vector(-x, -y);
	}

	// multiply vector by n
	vector vector::operator*(double n) const
	{
		return vector(n * x, n * y);
	}

	vector operator*(double n, const vector&a)
	{
		return a * n;
	}
	
	std::ostream&operator<<(std::ostream&os, const vector&v)
	{
		if (v.mode == vector::RECT)
			os << "(x,y) = (" << v.x << "," << v.y << ")";
		else if (v.mode == vector::POL)
		{
			os << "(m, a) =" << v.mag << ", "
				<< v.ang*rad_deg << ")";
		}
		else
			os << "vector object mode is invalid";
		return os;
	}
}


