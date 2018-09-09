// golf.h -- forpe9-1.cpp

#ifndef _GOLF_H_
#define _GOLF_H_

const int LEN = 40;
struct golf
{
	char fllname[LEN];
	int handicap;
};

//non-interactive version:
//	function sets golf structive to provided name, handicap
//	using values passed as arguments to the function

void setgolf(golf&g, const char * name, int hc);

//interactive version:
//	funcion solicits name and handicap from user
//	and sets the members of g to the values entered
//	returns 1 if name is entered, 0 if name is empty string

int setgolf(golf&g);

//function resets handicap to new value
void handicap(golf&g, int hc);

//function displays contents of golf structive
void showgolf(const golf&g);

#endif // !_golf.h