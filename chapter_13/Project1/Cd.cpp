//Cd.cpp
#include <iostream>
#include <cstring>
#include "Cd.h"

Cd::Cd(const char * s1,const char * s2, int n, double x)
{
	std::strcpy(performers, s1);
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd()
{
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

void Cd::Report() const
{
	std::cout << "performers: " << performers << std::endl;
	std::cout << "label: " << label << std::endl;
	std::cout << "selections: " << selections << std::endl;
	std::cout << "playtime: " << playtime << std::endl;
}

Classic::Classic(const char * w, const char * s1, const char * s2, int n, double x)
	:Cd(s1,s2,n,x)
{
	std::strcpy(work, w);
}

Classic::Classic()
{
	work[0] = '\0';
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "works: " << work << std::endl;
}

