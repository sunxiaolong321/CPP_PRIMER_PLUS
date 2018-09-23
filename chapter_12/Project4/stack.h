//stack.h -- class decaration for the stack ADT
#pragma once
#ifndef STACK_H_
#define	STACK_H_

typedef unsigned long Item;

class stack
{
private:
	enum {MAX = 10};	//constant specific to class
	Item * pitems;		//holds stack items
	int size;			//number of elements in stack
	static int top;			//index for top stack item
public:
	stack(int n = MAX);				//creates stack with n elements
	stack(const stack&st);
	~stack();
	bool isempty()const;
	bool isfull()const;
	//push() return false if stack already is full, true otherwise.
	bool push(const Item&item);		//add item to stack.
	//pop() returns false if stack already is empty, true otherwise.
	bool pop(Item&item);			//pop top into item.
	stack&operator=(const stack&st);
};

#endif // !STACK_H_
