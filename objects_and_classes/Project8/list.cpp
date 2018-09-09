//list.cpp
#include "list.h"

list::list()
{
	top = 0;
}


bool list::isempty()const
{
	return top == 0;
}

bool list::isfull() const
{
	return top == MAX;
	return false;
}

bool list::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	return false;
}

bool list::pop(Item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	return false;
}

list::~list()
{
}
