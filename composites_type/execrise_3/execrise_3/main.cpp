/*�ṹCandybar����3����Ա����һ����Ա�������ǿ��Ʒ�ƣ��ڶ�����Ա�������ǿ��������������С����
��������Ա�������ǹ��Ŀ�·�ﺬ������������
���дһ��������������ṹ������һ����Ϊsnack��candybar�������������Ա�ֱ��ʼ��Ϊ��Mocha Munch",2.3��350��
��ʼ��������snackʱ���С���󣬳�����ʾsnack����������*/
#include <iostream>
#include <string>
struct Candybar
{
	char logo[20];
	double weight;
	int kaluli;
};

int main()
{
	Candybar snack[2]
	{
		{"Mocha MUnch",2.3,350},
		{"dsfsd",34.34,43}
	};
	std::cout << "logo" << snack[0].logo << std::endl;
	std::cout << "weight" << snack[1].weight << "\n";
	std::cout << "kaluli" << snack[0].kaluli << "\n";
}