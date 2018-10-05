#pragma once
#ifndef BASE_H_
#define BASE_H_
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class base
{
private:
	char *label;
	int rating;
public:
	base(const char*l = "null", int r = 1);
	base(const base&a);
	virtual ~base() = 0;
	virtual void view()const;
	base & operator = (const base&a);
	friend std::ostream&operator<<(std::ostream&os, const base&a);
};

class basedma :public base
{
public:
	basedma(const char*l = "null", int r = 0);
	friend std::ostream&operator<<(std::ostream&os, const basedma&rs);
};

class lackdma : public base
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lackdma(const char*c = "blank", const char*l = "null", int r = 0);
	lackdma(const char*c, const base&a);
	virtual void view()const;
	friend std::ostream&operator<<(std::ostream&os, const lackdma&rs);
};

class hasdma :public base
{
private:
	char *style;
public:
	hasdma(const char*s = "none", const char*l = "null", int r = 0);
	hasdma(const char*s, const base&c);
	hasdma(const hasdma&hs);
	~hasdma();
	virtual void view()const;
	hasdma&operator=(const hasdma&rs);
	friend std::ostream&operator<<(std::ostream&os, const hasdma&rs);
};
#endif //BASE_H_
