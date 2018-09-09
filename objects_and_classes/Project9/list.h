#pragma once
#ifndef LIST_H_
#define LIST_H_

#include <string>
struct people
{
	std::string name;
	double age;
};
typedef struct people Item;
class list
{
	enum {MAX=10};
	Item item[MAX];
	int top;
public:
	list();
	bool isempty();
	bool isfull();
	bool push(const people&items);
	bool pop(people&items);
	int itemcount()const;
	void visit(void(*pf)(Item&));
	~list();
};

#endif // !LIST_H_
