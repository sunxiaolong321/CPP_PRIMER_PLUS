#pragma once
//����һ��������ʾ�����˻������ݳ�Ա���������������˺ţ�ʹ���ַ������ʹ���Ա����ִ�����²���
//����һ�����󲢽����ʼ����
//��ʾ�����������˺źʹ��
//���뺯��ָ���Ĵ��
//ȥ������ָ���Ŀ��
//���ṩ�������������ø�������ʵ�֡�
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