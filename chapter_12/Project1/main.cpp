#include <iostream>
#include "cow.h"
using namespace std;

int main()
{
	cow c1;
	cow c2 = cow("34", "daqiu", 12);
	c2.showcow();

	cow c3 = c2;  // ���ƹ��캯��
	c3.showcow();

	c1 = c3;  // ���ظ�ֵ�����
	c1.showcow();



}
