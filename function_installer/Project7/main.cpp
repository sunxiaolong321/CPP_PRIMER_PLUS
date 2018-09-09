/*
修改程序，使其使用两个名为sumarray（）的模板函数来返回数组元素的总和，而不是显示数组的内容。程序应显示thing
的总和以及所有debt的总和
*/

#include <iostream>

template <typename T>
void showarray(T arr[], int n);

template <typename T1, typename T2>
double sumarray(T1 arr1[], T2 *arr2[]);

template <typename T>
void showarray(T *arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	using namespace std;
	int things[6] = { 13,31,103,301,310,130 };
	struct debts mr_E[3] =
	{
		{"ima wolfe",2400.0},
		{"ura foxe",1300.0},
		{"iby stout",1800.0}
	};
	double *pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "the sum is: " << sumarray(things, pd) << endl;
	cout << "listing m's count of things:\n";
	showarray(things, 6);
	cout << "listing m's debts;\n";
	showarray(pd, 3);
}

template <typename T>
void showarray(T arr[], int n)
{
	using namespace std;
	cout << "template A\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

template <typename T1,typename T2>
double sumarray(T1 arr1[], T2 * arr2[])
{
	double sum = 0.0;
	for (int i = 0; i < 6; i++)
	{
		sum += arr1[i];
	}
	for (int i = 0; i < 3; i++)
	{
		sum += *arr2[i];
	}
	return sum;
}

template <typename T>
void showarray(T*arr[], int n)
{
	using namespace std;
	cout << "template\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << ' ';
	cout << endl;
}