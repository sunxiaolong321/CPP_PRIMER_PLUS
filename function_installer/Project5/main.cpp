/*
��дһ��ģ�庯��max5()������һ������5��T����Ԫ����ɵ������һ����ʾ����Ԫ����Ŀ��������Ϊ����������������������Ԫ�ء�
�����ڳ��ȹ̶�����˿�����ѭ����ʹ��Ӳ���룬������ͨ�����������ݣ�����һ��������ʹ�øú�������T�滻��һ������5��intֵ��
�����һ������5��doubleֵ�����飬�Բ��Ըú�����
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