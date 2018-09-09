#pragma once
#ifndef _PLORG_H_
#define _PLORG_H_

class plorg
{
	static const int mun = 20;
	char plorg_name[mun];
	int plorg_satisfiction;
public:
	plorg(const char* name ="plorga",int satisfiction = 50);
	void reset(const int&c);
	void show_plorg()const;
	~plorg();
};

#endif