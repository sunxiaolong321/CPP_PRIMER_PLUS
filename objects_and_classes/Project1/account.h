#pragma once
//定义一个类来表示银行账户。数据成员包括储户姓名、账号（使用字符串）和存款。成员函数执行如下操作
//创建一个对象并将其初始化；
//显示储户姓名、账号和贷款；
//存入函数指定的贷款；
//去除参数指定的款项。
//请提供类声明，而不用给出方法实现。
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>

class bank_account //clss declaration
{
private:
	std::string name;
	std::string account;
	double saving;
public:
	void build(const std::string&na, const std::string&acc, double save);
	void show_account();
	void add_saving(double save);
	void remove_saving(double save);
};

#endif _ACCOUNT_H_