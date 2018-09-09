#pragma once
#ifndef _PERSON_H_
#define _PERSON_H_

//������һ���ǳ��򵥵Ķ���

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
//��ʹ����һ��string�����һ���ַ����顣�����ܹ��Ƚ����ǵ��÷������ṩδ����ķ����Ĵ��룬�����
//������ʵ�֡��ٱ�дһ��ʹ�������ĳ�����ʹ�������ֿ��ܵĹ��캯�����ã�û�в�����һ������������������
//�Լ�������ʾ������������һ��ʹ����Щ���캯���ͷ��������ӣ�
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