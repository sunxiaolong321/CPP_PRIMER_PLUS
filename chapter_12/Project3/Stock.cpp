// stock20.cpp -- augmented version
#include <iostream>
#include <cctype>
#include "Stock.h"
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int Stock::num_string = 0;

// constructors
Stock::Stock()        // default constructor
{
	company = new char[1];
	company[0] = '0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
	num_string++;
}

Stock::Stock(const char*com,long n,double pr)
{
	len = std::strlen(com);
	company = new char[len + 1];
	std::strcpy(company, com);
	if (n < 0)
	{
		std::cout << "number of shares can't be negative;"
			<< company << "the shares are to 0.";
		shares = 0;
	}
	else shares = n;
	share_val = pr;
	num_string++;
}

// class destructor
Stock::~Stock()        // quiet class destructor
{
	--num_string;
	delete[]company;
}

// other methods
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}

std::ostream & operator<<(std::ostream & os, const Stock & s)
{
	using std::cout;
	using std::ios_base;
	// set format to #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	os << "Company: " << s.company
		<< "  Shares: " << s.shares << '\n';
	cout << "  Share Price: $" << s.share_val;
	// set format to #.##
	cout.precision(2);
	cout << "  Total Worth: $" << s.total_val << '\n';
	// restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
	return os;
}
