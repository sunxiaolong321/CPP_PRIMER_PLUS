/*
��дһ��ģ�庯��maxn����������һ��T����Ԫ����ɵ������һ����ʾ����Ԫ�ص�������Ϊ����������������������Ԫ�ء�
�ڳ���������в��ԣ��ó���ʹ��һ������һ��6��intԪ�ص������һ������4��doubleԪ�ص����������øú��������򻹰���
һ�����廯������charָ������������е�ָ��������Ϊ���������������е�һ���ַ����ĵ�ַ��ʹ����5���ַ���ָ����ɵ�
���������Ըþ��廯��
*/

//#�⺯����û��д������Ҫ����
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

