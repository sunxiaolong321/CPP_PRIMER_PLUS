#pragma once
#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

struct customer
{
	char fullname[35];
	double payment;
};

typedef customer item;

class customers
{
private:
	enum{MAX=20};
	item items[MAX];
	int top;
public:
	customers();
	bool isempty()const;
	bool isfull()const;
	bool push(const item&item);
	bool pop(item&item);
};

#endif