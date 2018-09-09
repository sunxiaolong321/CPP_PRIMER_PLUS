#include <iostream>
#include "account.h"

//定义一个类来表示银行账户。数据成员包括储户姓名、账号（使用字符串）和存款。成员函数执行如下操作
//创建一个对象并将其初始化；
//显示储户姓名、账号和贷款；
//存入函数指定的贷款；
//去除参数指定的款项。
//请提供类声明，而不用给出方法实现

int main()
{
	bank_account bank;
	bank.build("build a aim", "earn monry more", 10000.0);
	bank.show_account();
	bank.add_saving(100);
	bank.remove_saving(1000);
	bank.show_account();
}

