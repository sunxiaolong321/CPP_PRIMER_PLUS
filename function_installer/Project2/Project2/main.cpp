/*
candy�ṹ��3����Ա����һ����Ա�洢candy bar��Ʒ�����ơ��ڶ�����Ա�洢candy bar��������������С��������������Ա����candy bar��
�����������������дһ������ʹ��һ�������ĺ���������candybar�����á�charָ�롢double��int��Ϊ�������������3��ֵ������Ӧ��
�ṹ��Ա�����3��������Ĭ��ֵ�ֱ�Ϊ"mullennium munch",2.85��350.
���⣬�ó��򻹰���һ����candybar������Ϊ����������ʾ�ṹ���ݵĺ�����
������ʹ��const
*/

#include <iostream>

struct candy_bar
{
	char name[20] = "millennium munch";
	double weight = 2.85;
	int heat = 150;
};

candy_bar & candy(candy_bar & t);

int main()
{
	candy_bar t;
	candy(t);
}

candy_bar&candy(candy_bar&t)
{
	std::cout << t.heat;
	std::cout << t.name;
	std::cout << t.weight;
	return t;
}