#include "golf.h"
#include <iostream>

//将name和hc输入g结构中
void setgolf(golf & g, const char * name, int hc)
{
	using namespace std;
	g.fllname[LEN] = *name;
	g.handicap = hc;
}

int setgolf(golf & g)
{
	std::cout << "please input your name\n";
	char next;
	if (std::cin)
	{
		std::cin.get(g.fllname, LEN);
		std::cin.get(next);
		while (next != '\n')
			std::cin.get(next);
		return 1;
	}
		return 0;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	using namespace std;
	cout << "the golfer name is " << g.fllname << endl;
	cout << "the score name is " << g.handicap << endl;
}
