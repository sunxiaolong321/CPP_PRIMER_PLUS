//sales.cpp -- namespaces
#include <iostream>
#include "sales.h"


namespace SALES
{
	void setSales(sales&s, const double ar[], int n)
	{
		s.max = s.min = 0;
		double sum = 0;
		for (int i = 0; i < 4; i++)
			s.sales[i] = ar[i];
		for (int i = 0; i < n; i++)
		{
			sum += ar[i];
			if (ar[i] > s.max)
				s.max = ar[i];
			if (ar[i] < s.min)
				s.min = ar[i];
		}
		s.average = sum / n;
	}

	void setsales(sales&s)
	{

		for (int i = 0; i < 4; i++)
		{
			std::cout << "please input your sale " << ++i << std::endl;
			std::cin >> s.sales[--i];
		}
		s.max = s.min = s.sales[0];
		double sum = s.sales[0];
		for (int i = 1; i < 4; i++)
		{
			sum += s.sales[i];
			if (s.sales[i] >s.max)
				s.max = s.sales[i];
			if (s.sales[i] < s.min)
				s.min = s.sales[i];
		}
		s.average = sum / 4;
	}
	void showsales(const sales&s)
	{
		int x = 1;
		for (int i = 0; i < 4; i++)
			std::cout << "sales: " << x << " " << s.sales[i] << std::endl;
		std::cout << "sales min " << s.min << std::endl;
		std::cout << "sales max " << s.max << std::endl;
		std::cout << "sales average " << s.average << std::endl;
	}
}