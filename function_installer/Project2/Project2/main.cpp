/*
candy结构有3个成员。第一个成员存储candy bar的品牌名称。第二个成员存储candy bar的重量（可能是小数）；第三个成员储存candy bar的
热量（整数）。请编写一个程序，使用一个这样的函数，即将candybar的引用、char指针、double和int作为参数，并用最后3个值设置相应的
结构成员。最后3个参数的默认值分别为"mullennium munch",2.85和350.
另外，该程序还包含一个以candybar的引用为参数，并显示结构内容的函数。
尽可能使用const
*/

#include <iostream>

struct candy_bar
{
	char name[20] = "millennium munch";
	double weight = 2.85;
	int heat = 150;
};

candy_bar & candy(candy_bar & t);

int main()
{
	candy_bar t;
	candy(t);
}

candy_bar&candy(candy_bar&t)
{
	std::cout << t.heat;
	std::cout << t.name;
	std::cout << t.weight;
	return t;
}