/*�����嵥
#include <ioatream>
const int arsize = 16;
int main()
{
	long long factorials[arsise];
	factorials[1] = factorials[0] = 1LL;
	for(int i = 2; i < arsize;i++)
	facrorials[i] = i* factorials[i-1];
	for(int i = 0; i < arsize;i++)
	std::cout<<i<<"!="<<factorials[i]<<std::endl;
	return 0;
	����ĳ�array�����long double��ʽ,������100��
	*/
#include <iostream>
#include <array>
#include <iomanip>
#include <cstring>
#include <string>

void exercise_1(int x)
{
	std::array<long double,101> df;//����array����
	df[0] = df[1] = 1;
	for (int x = 2; x < 101; x++)
		df[x] = x * df[x - 1];
	for(int x = 0;x<101;x++)
		std::cout << x << "!=" << df[x] << std::endl;	
}

//��дһ��Ҫ���û��������ֵĳ���ÿ������󣬳��򶼽����浽ĿǰΪֹ������������ۼƺͣ����û�����0ʱ���������
void exercise_2()
{
	double ch;
	std::cin >> ch;
	int count = 0;
	while (ch != 0)
	{
		std::cout << ch;
		++count;
		std::cin >> ch;
	}
	std::cout << "the sum is" << count;
}

/*daphne��10%�ĵ���Ͷ����100��Ԫ��Ҳ����˵��ÿһ���������Ͷ�ʶ��10%����ÿ��10��Ԫ:
����Ϣ=0.10*ԭʼ���
��cleo��5%�ĸ���Ͷ����100��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ��������õ���Ϣ����5%
��Ϣ= 0.05*��ǰ���
cleo�ڵ�һ��Ͷ��100��Ԫ��ӯ����5%���õ���105��Ԫ����һ��ӯ����105��Ԫ��5%
��дһ�����򣬼���������cleo��Ͷ�ʼ�ֵ���ܳ���daphne��Ͷ�ʼ�ֵ������ʾ��ʱ���ߵ�Ͷ�ʼ�ֵ
*/
void exercise_3()
{
	double daphne, cleo;
	daphne = cleo = 100;
	int year = 0;
	do
	{
		daphne += 100 * 0.1;
		cleo += cleo * 0.05;
	} while (daphne > cleo);
	std::cout << "daphne" << daphne << "/tcleo" << cleo << std::endl;
	std::cout << "year" << year;
}

/*���дһ����������ȫ��ÿ���µ�������������ͨ��ѭ����ʹ�ó�ʼ��Ϊ�·��ַ�����char*������ߣ�string�������飩
���½�����ʾ��������������ݴ�����һ��int�����У�Ȼ�󣬳�����������и�Ԫ�ص���������������һ����������*/
void exercise_4()
{
	const char * month[12]
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"septembe",
		"October",
		"November",
		"December",
	};
	int price[12];
	int count = 0;
	for (int i = 0; i < 12; i++)
		std::cin >> price[i];
	for (int i = 0; i < 12; i++)
	{
		count += price[i];
		std::cout << month[i] << price[i] << std::endl;
	}
	std::cout << "count" << count << std::endl;
}

//�ö�ά��������������룬3����ÿ���µ������������򽫱���3��ÿ�������������������
void exercise_5()
{
	const char * month[12]
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"septembe",
		"October",
		"November",
		"December",
	};
	int year[3] = { 0,1,2 };
	int price[3][12] =
	{
		{23,34,23,23,43,23,24,32,34,332,34,23},
		{ 23,34,23,23,43,23,24,32,34,332,34,23 },
		{ 23,34,23,23,43,23,24,32,34,332,34,23 },
	};
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cout << std::setw(4) << year;
		for (int j = 0; j < 12; j++)
		{
			count += price[i][j];
			std::cout << month[0] << std::setw(4) << price[i][j] << std::endl;
		}
	}
	std::cout << "count" << count << std::endl;
}

/*���һ����Ϊcar�Ľṹ���������洢�����й���������Ϣ�������̣��洢���ַ������string�����е��ַ�������������ݣ���������
��дһ���������û�ѯ���ж�����������
��󣬳���ʹ��new������һ���ɶ�Ӧ������car�ṹ��ɵĶ�̬���顣
��������������ʾ�û�����ÿ�����������̣������ж��������ɣ��������Ϣ��
��ע�⣬����Ҫ�ر�С�ģ���Ϊ���������ȡ��ֵ���ַ�������������ʾÿ���ṹ������
*/
struct car
{
	char pruduct[10];
	int year;
};
void exercise_6()
{
	using namespace std;
	cout << "how many cars do you want to catalog?" << endl;
	int x;
	cin >> x;
	cin.get();
	car *ps = new car [x];
	for (int i = 0; i < x; i++)
	{
		cout << "Car:#"<<i+1<< endl;
		cin.get(ps[i].pruduct, 10).get();
		cin >> ps[i].year;
		cin.get();
	}
	for (int i = 0; i < x; i++)
	{
		cout << "here is your collection" << endl;
		cout << ps[i].year << "\t" ;
		cout << ps[i].pruduct << endl;
	}
	delete[] ps;
}

/*��дһ��������ʹ��һ��char�����ѭ����ÿ�ζ�ȡһ�����ʣ�ֱ���û�����doneΪֹ��
��󣬸ó���ָ���û������˶��ٸ����ʣ�������done���ڣ���
*/

void exercise_7()
{
	using namespace std;
	int count = 0;
	char words[20];
	cout << "enter words(to stop,type the word done)" << endl;
	do {
		cin.get(words, 10).get();
		count++;

	} while (strcmp(words, "done"));
	cout << "you entered a total of " << count-1 << " words." << endl;
}

//��дһ������ǰһ����ϰ�������ĳ��򣬵�����sting����������ַ����飬���ڳ����а���ͷ�ļ�string����ʹ�ù�ϵ��������бȽϲ���
void execrise_8()
{
	using namespace std;
	int count = 0;
	string words;
	cout << "enter words(to stop,type the word done)" << endl;
	do {
		getline(cin, words);
		count++;

	} while (words!="done");
	cout << "you entered a total of " << count - 1 << " words." << endl;
}

/*��дһ��ʹ��Ƕ�׺����ĳ���Ҫ���û�����һ��ֵ��ָ��Ҫ��ʾ�����С�
Ȼ�󣬳�����ʾ���Ӧ���Ǻţ����е�һ�а���һ���Ǻţ��ڶ��а��������Ǻţ��Դ����ơ�
ÿһ�а������ַ��������û�ָ���ĺ��������Ǻ�ǰ����Ͼ��
*/
int main()
{
	using namespace std;
	cout << "enter number of rows: ";
	int x;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		for (int j = x-i-1; j > 0; j--)
		{
			cout << ".";
		}
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}