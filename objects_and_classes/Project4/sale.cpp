#include "sale.h"
#include <iostream>

void sale::setsale(const double ar[], int n)
{
	double sum = 0;
	max = min = ar[0];
	for (int i = 0; i < n; i++)
	{
		sales[i] = ar[i];
		sum += ar[i];
		if (ar[i] > max)
			max = ar[i];
		if (ar[i] < min)
			min = ar[i];
		sum += ar[i];
	}
	average = sum / n;
}

void sale::setsales()
{
	int i = 0, n = 1;
	std::cout << "please input your sales" << n << std::endl;
	while (std::cin>>sales[i])
	{
		std::cout << "please input your sales" << ++n << std::endl;
		i++;
	}
	min = max = sales[0];
	double sum;
	for (int i = 0; i < n; i++)
	{
		sum = sales[i];
		if (min > sales[i])
			min = sales[i];
		if (max < sales[i])
			max = sales[i];
	}
	average = sum / n;
}

void sale::showsales()
{
	for (int i = 1; i < 5; i++)
		std::cout << "showsales " << i << " is " << sales[i] << std::endl;
	std::cout << "the average is " << average << std::endl;
	std::cout << "the max is " << max << std::endl;
	std::cout << "the min is " << min << std::endl;

}
