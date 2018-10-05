#include "port.h"
#define _CRT_SECURE_NO_WARININGS
/**********
*port methods
***********/

Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}

Port::Port(const Port & p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	// TODO: 在此处插入 return 语句
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
	// TODO: 在此处插入 return 语句
}

Port & Port::operator-=(int b)
{
	bottles -= b;
	return *this;
	// TODO: 在此处插入 return 语句
}

void Port::Show() const
{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Style: " << style << std::endl;
	std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
	// TODO: 在此处插入 return 语句
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp)
{
	os << (const Port &)vp << ", " << vp.nickname << ", " << vp.year;
	return os;
	// TODO: 在此处插入 return 语句
}

/**********
* VintagePort methods
**********/

VintagePort::VintagePort(const char * br, int b, const char * nn, int y):Port(br,"vintage",b)
{
	nickname = new char[std::strlen(nn) + 1];
	std::strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp):Port(vp)
{
	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete[] nickname;
	nickname = new char[std::strlen(vp.nickname) + 1];
	std::strcpy(nickname, vp.nickname);
	year = vp.year;

	return *this;
	// TODO: 在此处插入 return 语句
}

void VintagePort::Show() const
{
	Port::Show();
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Year: " << year << std::endl;
}
