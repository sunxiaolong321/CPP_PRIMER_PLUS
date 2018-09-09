/*
下面是一个程序的框架
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
请提供其中描述的函数和原型，从而完成该程序。注意，应有两个show()函数，每个都使用默认参数。请尽可能使用const参数。
set（）使用new分配足够的空间来存储特定的字符串。这里使用的技术与设计和实现类时使用的相似。（可能还必须修改头文件
的名称，删除using编译指令，这取决于所用的编译器。）
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


