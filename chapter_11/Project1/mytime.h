#pragma once
#ifndef MYTIME_H_
#define MYTIME_H_

class mytime
{
private:
	int hours;
	int minutes;
public:
	mytime();
	mytime(int h, int m = 0);
	void addmin(int m);
	void addhr(int h);
	void reset(int h = 0, int m = 0);
	mytime operator+(const mytime&t)const;
	mytime operator-(const mytime&t)const;
	mytime operator*(double t)const;
	void show()const;
	~mytime();
};

#endif //mytime.h