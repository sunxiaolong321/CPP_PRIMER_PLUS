#include "base.h"



base::base(const char * l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}

base::base(const base & a)
{
	label = new char[strlen(a.label) + 1];
	std::strcpy(label, a.label);
	rating = a.rating;
}

base::~base()
{
	delete[]label;
}

void base::view() const
{
	std::cout << "label: " << label << std::endl;
	std::cout << "rating: " << rating << std::endl;
}

base & base::operator=(const base & a)
{
	if(this == &a)
	return *this;

	delete[]label;
	label = new char[std::strlen(a.label) + 1];
	std::strcpy(label, a.label);
	rating = a.rating;
	// TODO: 在此处插入 return 语句
}

std::ostream & operator<<(std::ostream & os, const base & a)
{
	os << a.label << "," << a.rating;
	return os;
	// TODO: 在此处插入 return 语句
}

std::ostream & operator<<(std::ostream & os, const basedma & rs)
{
	os << (const base&)rs;
	return os;
	// TODO: 在此处插入 return 语句
}

std::ostream & operator<<(std::ostream & os, const lackdma & rs)
{
	os << rs.color << ", " << (const base&)rs;
	return os;
	// TODO: 在此处插入 return 语句
}

std::ostream & operator<<(std::ostream & os, const hasdma & rs)
{
	os << rs.style << ", " << (const base&)rs;
	return os;
	// TODO: 在此处插入 return 语句
}

basedma::basedma(const char * l, int r) :base(l, r)
{
}

lackdma::lackdma(const char * c, const char * l, int r) : base(l,r)
{
	std::strcpy(color, c);
}

lackdma::lackdma(const char * c, const base & a):base(a)
{
	std::strcpy(color, c);
}

void lackdma::view() const
{
	base::view();
	std::cout << color << std::endl;
}

hasdma::hasdma(const char * s, const char * l, int r):base(l,r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasdma::hasdma(const char * s, const base & c):base(c)
{
	style = new char[std::strlen(s) + 1];
}

hasdma::hasdma(const hasdma & hs):base(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasdma::~hasdma()
{
	delete[]style;
}

void hasdma::view() const
{
	base::view();
	std::cout << style << std::endl;
}

hasdma & hasdma::operator=(const hasdma & rs)
{
	if (this == &rs)
		return *this;
	base::operator=(rs);
	delete[]style;
	style = new char[std::strlen(rs.style) + 1];
	std::strcpy(style, rs.style);
	return *this;
	// TODO: 在此处插入 return 语句
}
