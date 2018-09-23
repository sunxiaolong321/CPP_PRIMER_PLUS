#include "stack.h"
#include <cctype>
#include <iostream>

int  stack::top = 0;

stack::stack(int n)
{
	pitems = new Item[n];
	size = n;
	top = 0;
}

stack::stack(const stack & st)
{
	size = st.size;
	top = st.top;
	pitems = new Item [size];
	for (int i = 0; i < top; ++i)
		pitems[i] = st.pitems[i];
}

stack::~stack()
{
	delete[]pitems;
}

bool stack::isempty() const
{
	return top == 0;
}

bool stack::isfull() const
{
	return top == MAX;
}

bool stack::push(const Item & item)
{
	if (isfull())
		return false;
	pitems[top++] = item;
	return true;
}

bool stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
		return false;
}

stack & stack::operator=(const stack & st)
{
	top = st.top;
	size = st.size;
	delete[]pitems;
	pitems = new Item[size];
	for (int i = 0; i < top; ++i)
		pitems[i] = st.pitems[i];
	
	return *this;
	// TODO: 在此处插入 return 语句
}
