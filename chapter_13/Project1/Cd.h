#pragma once
#pragma warning(disable : 4996)
#ifndef CD_H_
#define CD_H_

class Cd
{		//represents a CD disk
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;	//playing time in minutes
public:
	Cd(const char * s1,const char * s2,int n, double x);
	Cd();
	virtual ~Cd(){};
	virtual void Report()const;		//reports all CD data
};

class Classic :public Cd
{
private:
	char work[100];
public:
	Classic(const char*w,const char*s1,const char*s2,int n,double x);
	Classic();
	virtual ~Classic() {};
	virtual void Report()const;
};

#endif // !CD_H_
