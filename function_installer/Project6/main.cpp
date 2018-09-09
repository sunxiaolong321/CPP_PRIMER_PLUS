/*
编写一个模板函数maxn（），它将一个T类型元素组成的数组和一个表示数组元素的整数作为参数，并返回数组中最大的元素。
在程序对它进行测试，该程序使用一个包含一个6个int元素的数组和一个包含4个double元素的数组来调用该函数。程序还包含
一个具体化，它将char指针数组和数组中的指针数量作为参数，并返回其中第一个字符串的地址。使用由5个字符串指针组成的
数组来测试该具体化。
*/

//#这函数我没法写，这是要干嘛
#include <iostream>

template <typename T>
double maxn(T*a, int x);

struct job
{
	char arr[20];
	int number;
};

int main()
{
	using namespace std;
	int arr1[6];
	double arr2[4];
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	for (int i = 0; i < 6; i++)
	{

	}
}

template<typename T>
double maxn(T a[], int x)
{
	int max = a[0];
	for (int i = 1; i < x; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

