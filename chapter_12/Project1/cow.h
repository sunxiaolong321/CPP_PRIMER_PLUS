#pragma once
#ifndef COW_H_
#define COW_H_

#include <iostream>

class cow
{
private:
	char name[20];
	char * hobby;
	double weight;
public:
	cow();
	cow(const char*nm, const char*ho, double wt);
	cow(const cow &c);
	~cow()
	{
		delete[] hobby;
	}
	cow&operator=(const cow&c);
	void showcow()const;
};

#endif //cow.h