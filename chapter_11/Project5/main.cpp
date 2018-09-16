#include <iostream>
#include "tonewt.h"

int main()
{
	using std::cout;
	using std::endl;

	tonewt s1;
	tonewt s2 = tonewt(2, 3);
	tonewt s3 = tonewt(3, 2.5, tonewt::PDS);

	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	s3.set_stn();
	cout << "s3 set_stn(), s3 = " << s3 << endl;
	cout << "s3 - s2 = " << s3 - s2 << endl;
	cout << "s2 + s1 = " << s2 + s1 << endl;
	cout << "3*s3 = " << 3 * s3 << endl;
	cout << "s3*2 = " << s3 * 2 << endl;

}