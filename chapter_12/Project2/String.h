#pragma once
#ifndef STRING_H_
#define STRING_H_
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

class String
{
private:
	char*str;
	int len;
	static int num_strings;
	static const int CINIM = 80;
public:
	String();
	String(const char*st);
	int Howmany();
	String(const String&st);
	void stringlow();
	void stringup();
	int has(char ch)const;
	friend std::istream & operator>>(std::istream&is,String s);
	friend std::ostream&operator<<(std::ostream&os,const String s);
	friend bool operator>(const String&st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	String&operator=(const String&st);
	String&operator=(const char*s);
	char&operator[](int i);
	const char&operator[](int i)const;
	String operator+(const String&s)const;
	String operator+(const char*st)const;
	friend String operator+(const char * st1, const String & st2);
	~String();
};

#endif //String.h

