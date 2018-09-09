#include <iostream>
#include "golf.h"

void golf::setgolf(const char * name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}

void golf::showgolf()
{
	std::cout << "the company's fllname is " << fullname << std::endl;
	std::cout << "the handicap " << handicap;
}


