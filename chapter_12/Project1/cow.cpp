#include "cow.h"
#include <cstring>
#include <iostream>

cow::cow()
{
	weight = 0.0;
	hobby = nullptr;
	name[0] = '\0';
}

cow::cow(const char * nm, const char * ho, double wt)
{
	strcpy_s(name, nm);
	int len;
	len = std::strlen(ho);
	hobby = new char[len];
	strcpy_s(hobby, ho);
	weight = wt;
}

cow::cow(const cow & c)
{
	strcpy_s(name, c.name);
	int len;
	len = strlen(c.hobby);
	hobby = new char[len];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

cow & cow::operator=(const cow & c)
{
	strcpy_s(name, c.name);
	delete[]hobby;
	int len;
	len = std::strlen(c.hobby);
	hobby = new char[len];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
	// TODO: 在此处插入 return 语句
}

void cow::showcow() const
{
	std::cout << "the name is " << name << "\n and the hobby is " << hobby << "\n and the wight is " << weight;
}
