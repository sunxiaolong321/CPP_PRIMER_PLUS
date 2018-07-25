//编写一个程序，让用户输入三次40码跑的成绩
#include <iostream>
#include <array>

int main()
{
	std::array<int, 3> score;
	std::cin >> score[0];
	std::cout << score[0];
}