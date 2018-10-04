#include "Cd.h"
#include <iostream>

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	performers = new char[std::strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[std::strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;

}

Cd::Cd(const Cd & d)
{
	performers = new char[std::strlen(d.performers) + 1];
	performers = d.performers;
	label = new char[std::strlen(d.label) + 1];
	label = d.label;
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
	delete[]performers;
	delete[]label;
}

void Cd::report() const
{
	std::cout << "performers: " << performers << std::endl;
	std::cout << "abel: " << label << std::endl;
	std::cout << "selections: " << selections << std::endl;
	std::cout << "playtime " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;

	delete[]performers;
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);

	delete[] label;
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);

	selections = d.selections;
	playtime = d.playtime;

	return *this;
	// TODO: 在此处插入 return 语句
}

Classic::Classic(const char * w, const char * s1, const char * s2, int n, double x):Cd(s1,s2,n,x)
{
	work = new char[std::strlen(w) + 1];
	strcpy(work, w);
}

Classic::Classic(const Classic & c):Cd(c)
{
	work = new char[std::strlen(c.work) + 1];
	std::strcpy(work, c.work);
}

Classic::Classic()
{
	work = nullptr;
	Cd();
}

Classic::~Classic()
{
	delete[]work;
}

void Classic::report() const
{
	Cd::report();
	std::cout << "works: " << work << std::endl;
}

Classic & Classic::operator=(const Classic & c)
{
	if (this == &c)
		return *this;

	Cd::operator=(c);
	delete[] work;
	work = new char[std::strlen(c.work) + 1];
	std::strcpy(work, c.work);

	return *this;
	// TODO: 在此处插入 return 语句
}
