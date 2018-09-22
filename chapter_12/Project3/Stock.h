#pragma once
#ifndef STOCK_H_
#define STOCK_H_
#define _CRT_SECURE_NO_WARNINGS
#include <string>

class Stock
{
private:
	char*company;
	int shares;
	double share_val;
	double total_val;
	int len;
	static int num_string;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();        // default constructor
	Stock(const char*com,long n,double pr);
	~Stock();       // do-nothing destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	friend std::ostream&operator<<(std::ostream&os,const Stock&s);
	const Stock & topval(const Stock & s) const;

};

#endif // !STOCK_H_
