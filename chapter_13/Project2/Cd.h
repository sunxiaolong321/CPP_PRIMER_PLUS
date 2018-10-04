#pragma once
#pragma warning(disable : 4996)
#ifndef CD_H_
#define CD_H_

class Cd
{
private:
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(const char * s1,const char * s2, int n, double x);
	Cd(const Cd&d);
	Cd();
	virtual~Cd();
	virtual void report()const;
	Cd&operator=(const Cd&d);
};

class Classic :public Cd
{
private:
	char * work;
public:
	Classic(const char *w, const char *s1, const char*s2, int n, double x);
	Classic(const Classic&c);
	Classic();
	virtual ~Classic();
	virtual void report()const;
	Classic&operator=(const Classic&c);
};

#endif CD_H_
