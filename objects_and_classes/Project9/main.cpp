#include <iostream>
#include "list.h"

void addage(Item&item);

int main()
{
	list po;
	Item i = { "sunxiaolong",21 };
	po.push(i);
	po.pop(i);
	po.visit(addage);
}

void addage(Item&item)
{
	item.age += 1;
}