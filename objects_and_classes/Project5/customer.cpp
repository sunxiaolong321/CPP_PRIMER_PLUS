#include "customer.h"
#include <iostream>

customers::customers()
{
	top = 0;
}

bool customers::isempty() const
{
	return top == 0;
}

bool customers::isfull() const
{
	return top == MAX;
}

bool customers::push(const item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	return false;
}

bool customers::pop(item & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	return false;
}
