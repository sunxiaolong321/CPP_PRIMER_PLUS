#include <iostream>
#include "account.h"

//����һ��������ʾ�����˻������ݳ�Ա���������������˺ţ�ʹ���ַ������ʹ���Ա����ִ�����²���
//����һ�����󲢽����ʼ����
//��ʾ�����������˺źʹ��
//���뺯��ָ���Ĵ��
//ȥ������ָ���Ŀ��
//���ṩ�������������ø�������ʵ��

int main()
{
	bank_account bank;
	bank.build("build a aim", "earn monry more", 10000.0);
	bank.show_account();
	bank.add_saving(100);
	bank.remove_saving(1000);
	bank.show_account();
}

