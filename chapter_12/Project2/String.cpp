#include <cstring>
#include <cctype>
#include "String.h"
#define _CRT_SECURE_NO_WARNINGS

int String::num_strings = 0;

int String::Howmany()
{
	return num_strings;
}

String::String(const char*st)
{
	len = std::strlen(st);
	str = new char[len + 1];
	std::strcpy(str, st);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String&st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

bool operator==(const String & st1, const String & st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

String & String::operator=(const String & st)
{
	if (this == &st)
		return *this;
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
	// TODO: 在此处插入 return 语句
}

String & String::operator=(const char * s)
{
	delete[]str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
	// TODO: 在此处插入 return 语句
}

char & String::operator[](int i)
{
	return str[i];
	// TODO: 在此处插入 return 语句
}

const char & String::operator[](int i) const
{
	return str[i];
	// TODO: 在此处插入 return 语句
}

String String::operator+(const String & s) const
{
	int len = std::strlen(str) + std::strlen(s.str);
	char*str_sum = new char[len + 1];
	strcpy_s(str_sum, str);
	std::strcat(str_sum, s.str);
	String str_new = str_sum;
	delete[]str_sum;
	return str_new;
}

String String::operator+(const char * st)const
{
	String temp = st;
	String sum = *this + temp;
	return sum;
}

String::~String()
{
	--num_strings;
	delete[]str;
}

void String::stringlow()
{
	for (int i = 0; i < len; ++i)
	{
		if (std::isupper(str[i]))
			str[i] = std::tolower(str[i]);
	}
}

void String::stringup()
{
	for (int i = 0; i < len; ++i)
	{
		if (std::islower(str[i]))
			str[i] = std::toupper(str[i]);
	}
}

int String::has(char ch)const
{
	int sum, i;
	for (sum = i = 0; i < len; ++i)
	{
		if (str[i] == ch)
			sum++;
	}
	return sum;
}

std::istream & operator>>(std::istream & is,String s)
{
	char word[s.CINIM];
	is >> word[s.CINIM];
	int len = strlen(word);
	s.str = new char[len];
	strcpy_s(word, s.str);
	return is;
	// TODO: 在此处插入 return 语句
}

std::ostream & operator<<(std::ostream & os, const String s)
{
	os << "the string is " << s.str;
	return os;
	// TODO: 在此处插入 return 语句
}

bool operator>(const String & st1, const String & st2)
{

	return false;
}


String operator+(const char * st1, const String & st2)
{
	return st2 + st1;
}
