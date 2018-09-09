#pragma once
//golf.h
#ifndef _GOLF_H_
#define _GOLF_H_

class golf
{
private:
	static const int LEN = 40;
	char fullname[LEN];
	int handicap;
public:
	void setgolf() { fullname[0] = '\0', handicap = 0; };
	void setgolf(const char*name, int hc);
	void handicap1() { handicap = 0; };
	void showgolf();

};

#endif // !golf.h
