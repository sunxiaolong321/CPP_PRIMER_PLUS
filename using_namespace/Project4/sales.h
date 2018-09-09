#pragma once
#ifndef _SALES_H_
#define _SALES_H_

//请基于下面这个命名空间编写一个由3个文件组成的程序；
namespace SALES
{
	const int QUARTERS = 4;
	struct sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	//copies the lesser of 4 or n items from the array ar
	//to the sales member of s and computers and stores the
	//averag, maximum, and minimum values of the entered items;
	//remaining elements of sales, if any, set to 0
	void setSales(sales&s, const double ar[], int n);
	//gathers sales for 4 quarters interactively, stores them
	//in the sales member of s and computes and stores the 
	//average,maximum, and minimum values
	void setsales(sales&s);
	//display all information in structive s
	void showsales(const sales&s);
}

#endif _SALES_H_