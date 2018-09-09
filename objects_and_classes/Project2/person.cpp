//person.cpp
#include "person.h"
#include <iostream>

person::person(const std::string & ln, const char * fn)
{
	lname = ln;
	strcpy_s(fname, fn);
}

//person::~person()

void person::show() const
{
//	std::cout.precision[25];
	std::cout << "the person's name is" << fname <<" "<< lname;
}

void person::formalshow() const
{
	std::cout << "the person's name is" << lname << " " << fname;
}


