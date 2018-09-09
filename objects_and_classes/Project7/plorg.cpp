#include "plorg.h"
#include <iostream>

plorg::plorg(const char * name, int satisfiction)
{
	strcpy_s(plorg_name, name);
	plorg_satisfiction = satisfiction;
}
void plorg::reset(const int&c)
{
	plorg_satisfiction = c;
}

void plorg::show_plorg()const
{
	std::cout << "the show plorg name is " << plorg_name << std::endl;
	std::cout << "the ci is " << plorg_satisfiction << std::endl;
}

plorg::~plorg()
{
}
