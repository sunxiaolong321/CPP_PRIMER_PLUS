/*
������һ������Ŀ��
#Include <iostream>
using namespace std;
#include <cstring>
struct stringy{
	char *str;
	int ct;
	};
int main()
{
	string beany;
	char testing[] = "reality isn't what it used to be.";
	set(beany,testing);
	show(beany);
	show(beany,2);
	testing[0]='D';
	testing[1]='u';
	show(testing);
	show(testing,3);
	show("done!");
	return 0;
}
���ṩ���������ĺ�����ԭ�ͣ��Ӷ���ɸó���ע�⣬Ӧ������show()������ÿ����ʹ��Ĭ�ϲ������뾡����ʹ��const������
set����ʹ��new�����㹻�Ŀռ����洢�ض����ַ���������ʹ�õļ�������ƺ�ʵ����ʱʹ�õ����ơ������ܻ������޸�ͷ�ļ�
�����ƣ�ɾ��using����ָ���ȡ�������õı���������
*/

#include <iostream>

using namespace std;
#include <cctype>
#include <cstring>


struct stringy 
{
	char *str;
	int ct;
};


void set(stringy&beany, const char testing[]);
void show(const stringy beany, int x=1);
void show(string testing, int x = 1);

int main()
{
	stringy beany;
	char testing[] = "reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("done!");
	return 0;
}

void set(stringy&beany,char testing[])
{
	beany.str = testing;
	int count = 0;
	while (isprint(testing[count]))
		count++;
	beany.ct = count;
}

void show(const stringy beany, int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "sting" << beany.str;
		cout << "number" << beany.ct;
	}
}

void show(string testing, int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "sting";
		printf("%s\n", testing);
	}
}


