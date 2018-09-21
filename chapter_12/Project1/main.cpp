#include <iostream>
#include "cow.h"
using namespace std;

int main()
{
	cow c1;
	cow c2 = cow("34", "daqiu", 12);
	c2.showcow();

	cow c3 = c2;  // 复制构造函数
	c3.showcow();

	c1 = c3;  // 重载赋值运算符
	c1.showcow();



}
