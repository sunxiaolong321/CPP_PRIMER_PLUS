/*��дһ����������Ҫ���û���������������Ȼ�����������������������һ�����ź�һ���ո�ƴ�����������洢����ʾ��Ͻ��
*��ʹ��char�����cstring�еĺ���
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