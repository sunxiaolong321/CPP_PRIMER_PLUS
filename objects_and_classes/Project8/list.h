#pragma once
#ifndef LIST_H_
#define HIST_H_

typedef unsigned long Item;

class list
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	list();
	bool isempty()const;
	bool isfull()const;
	bool  push(const Item&item);
	bool pop(Item&item);
	~list();
};

#endif // !_LIST_H_
