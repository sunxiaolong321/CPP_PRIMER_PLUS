#include <iostream>
#include "person.h"

int main()
{
	person one;
	person two("smythecraft");
	person three("dimwiddy", "sam");
	one.show();
	std::cout << std::endl;
	one.formalshow();
	//etc.for two and three
}