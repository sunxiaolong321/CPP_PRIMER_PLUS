#include "list.h"



list::list()
{
	top = 0;
}

bool list::isempty()
{
	return top == 0;
}

bool list::isfull()
{
	return top == MAX;
}

bool list::push(const people & items)
{
	if (top < MAX)
	{
		item[top++] = items;
		return true;
	}
	return false;
}

bool list::pop(people & items)
{
	if (top > 0)
	{
		item[--top] = items;
		return true;
	}
	return false;
}

int list::itemcount() const
{
	return top;
}

void list::visit(void(*pf)(Item &))
{
	for (int i = 0; i < top; i++)
		(*pf)(item[i]);
}


list::~list()
{
}
