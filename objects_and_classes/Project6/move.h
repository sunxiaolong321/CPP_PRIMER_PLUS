#pragma once
#ifndef _MOVE_H_
#define _MOVE_H_

class move
{
private:
	double x;
	double y;
public:
	move(double a = 0,double b = 0);
	void showmove() const;
	move add(const move & m)const;
	void reset(double a = 0, double b = 0);
	~move();
};

#endif // !_MOVE_H_
