/*
编写一个模板函数max5()，它将一个包含5个T类型元素组成的数组和一个表示数组元素数目的整数作为参数，并返回数组中最大的元素。
（由于长度固定，因此可以在循环中使用硬编码，而不必通过参数来传递）。在一个程序中使用该函数，将T替换成一个包含5个int值的
数组和一个包含5个double值的数组，以测试该函数。
*/
#include <iostream>

template <typename T>
double max5(T*a, int x);

int main()
{
	using namespace std;
	double arr[5];
	int x = 5;
	for (int i = 0; i < 5; i++)
	{
		cout << "plase input your number " << i + 1 << endl;
		cin >> arr[i];
	}
	double max;
	max = max5(arr, x);
	cout << "the max is " << max;
}

template <typename T>
double max5(T a[], int x)
{
	double y = a[0];
	for (int i = 1; i < x; i++)
	{
		if (a[i] > y)
			y = a[i];
	}
	return y;
}