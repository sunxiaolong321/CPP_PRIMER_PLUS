/*willim从事披萨饼分析服务，对于每个披萨饼，他都需要记录下列信息
披萨饼公司的名称，可以有多个单词组成
披萨饼的直径
披萨饼的重量
设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序，程序将请求用户输入这些信息，然后
显示这些信息*/
#include <iostream>
struct pisa
{
	char company[20];
	double diamater;
	double weight;
};
/*
int main()
{
	pisa information[100];
	std::cout << "company\n";
	std::cin.getline(information[0].company, 20);
	std::cout << "diamater\n";
	std::cin >> information[0].diamater;
	std::cout << "weight\n";
	std::cin >> information[0].weight;
}

int main()
{
	using namespace std;
	pisa *pa = new pisa;
	cout << "company\n";
	cin.getline(pa->company, 20);
	std::cout << "diamater\n";
	cin >> (*pa).diamater;
	std::cout << "weight\n";
	std::cin >> pa->weight;
	delete pa;
}
*/

int main()
{
	using namespace std;
	pisa  *pa = new pisa[10];
	cout << "company\n";
	cin.getline(pa[0].company, 20);
	std::cout << "diamater\n";
	cin >> pa[0].diamater;
	std::cout << "weight\n";
	std::cin >> pa[0].weight;
	delete [] pa;
}