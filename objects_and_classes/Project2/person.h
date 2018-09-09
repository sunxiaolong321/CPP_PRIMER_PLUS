#pragma once
#ifndef _PERSON_H_
#define _PERSON_H_

//下面是一个非常简单的定义

#include <string>
/*
class person
{
private:
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	person() { lname = "", fname[0] = '\0'; };
	person(const std::string &ln, const char*fn = "heyyou");
	//the following methods display lname and fname
	void show()const;
	void formalshow()const;
};
//它使用了一个string对象和一个字符数组。让您能够比较它们的用法。请提供未定义的方法的代码，以完成
//这个类的实现。再编写一个使用这个类的程序，它使用了三种可能的构造函数调用（没有参数，一个函数和两个参数）
//以及两种显示方法。下面是一个使用这些构造函数和方法的例子：
person one;
person two("smythecraft");
person three("dimwiddy", "sam");
one.show();
cout << endl;
one.formalshow();
//etc.for two and three
*/

class person
{
private:
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	person() { lname = "", fname[0] = '\0'; };
	person(const std::string &ln, const char*fn = "heyyou");
	//~person();
	//the following methods display lname and fname
	void show()const;
	void formalshow()const;
};

#endif