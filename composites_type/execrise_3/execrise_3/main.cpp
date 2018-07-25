/*结构Candybar包含3个成员，第一个成员储存了糖块的品牌，第二个成员储存了糖块的重量（可以有小数，
第三个成员储存了糖果的卡路里含量（整数）。
请编写一个程序，声明这个结构，创建一个名为snack的candybar变量，并将其成员分别初始化为“Mocha Munch",2.3和350。
初始化在声明snack时进行。最后，程序显示snack变量的内容*/
#include <iostream>
#include <string>
struct Candybar
{
	char logo[20];
	double weight;
	int kaluli;
};

int main()
{
	Candybar snack[2]
	{
		{"Mocha MUnch",2.3,350},
		{"dsfsd",34.34,43}
	};
	std::cout << "logo" << snack[0].logo << std::endl;
	std::cout << "weight" << snack[1].weight << "\n";
	std::cout << "kaluli" << snack[0].kaluli << "\n";
}