/*willim�����������������񣬶���ÿ����������������Ҫ��¼������Ϣ
��������˾�����ƣ������ж���������
��������ֱ��
������������
���һ���ܹ��洢��Щ��Ϣ�Ľṹ������дһ��ʹ�����ֽṹ�����ĳ��򣬳��������û�������Щ��Ϣ��Ȼ��
��ʾ��Щ��Ϣ*/
#include <iostream>
struct pisa
{
	char company[20];
	double diamater;
	double weight;
};
/*
int main()
{
	pisa information[100];
	std::cout << "company\n";
	std::cin.getline(information[0].company, 20);
	std::cout << "diamater\n";
	std::cin >> information[0].diamater;
	std::cout << "weight\n";
	std::cin >> information[0].weight;
}

int main()
{
	using namespace std;
	pisa *pa = new pisa;
	cout << "company\n";
	cin.getline(pa->company, 20);
	std::cout << "diamater\n";
	cin >> (*pa).diamater;
	std::cout << "weight\n";
	std::cin >> pa->weight;
	delete pa;
}
*/

int main()
{
	using namespace std;
	pisa  *pa = new pisa[10];
	cout << "company\n";
	cin.getline(pa[0].company, 20);
	std::cout << "diamater\n";
	cin >> pa[0].diamater;
	std::cout << "weight\n";
	std::cin >> pa[0].weight;
	delete [] pa;
}