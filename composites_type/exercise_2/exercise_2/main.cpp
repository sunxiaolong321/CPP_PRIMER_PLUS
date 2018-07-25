/*编写一个函数，他要求用户首先输入其名，然后输入起姓名，最后将两者用一个逗号和一个空格拼合起来，并存储和显示组合结果
*请使用char数组和cstring中的函数
#include <cstring>
#include <iostream>

int main()
{
	using namespace std;
	char first_name[10], last_name[10];
	cout << "enter your first name: \n";
	cin.getline(first_name,20);
	strcat_s(first_name, ", ");
	cout << "enter your last name: \n";
	cin.getline(last_name, 20);
	strcat_s(first_name, last_name);
	cout << "here is the information in a single string\n" << first_name << endl;
}
*/
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string first_name, last_name;
	cout << "enter your first name: \n";
	cin >> first_name;
	cout << "enter your last name: \n";
	cin >> last_name;
	first_name += ", " + last_name;
	cout << "here is the information in a single string\n" << first_name << endl;
}