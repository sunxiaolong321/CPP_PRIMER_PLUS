#include <iostream>
#include <cctype>
/*����benevolent order of programer����BOP����ϣ����Ǳ����ͨ�������߶���ʵ������ͷ�λ�����BOP
�������˽��������������дһ�����򣬿���ʹ����ʵ���֡�ͷ�Ρ������������Աƫ�����г�ȺԱ��
*/
const int strsize = 10;

struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int exercise_1()
{
	using namespace std;
	bop company[10];//�����ṹ����
	char word;
	cout << "benecolent order of programmers reports" << endl;
	cout << "a. display by name     b. display by title" << endl;
	cout << "c. display by bopname  d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "enter your choice: ";
	cin >> word;
	cin.get();
	while (!isalpha(word))
	{
		cout << "please int your chice: ";
		cin >> word;
		cin.get();
	}
	while (word != 'q')
	{
		switch (word)
		{
		case 'a': {
			for (int i = 0; i < 3; i++)
				cout << company[i].fullname << endl;
			break; };
		case 'b': {
			for (int i = 0; i < 3; i++)
				cout << company[i].title << endl;
			break; };
		case 'c': {
			for (int i = 0; i <3; i++)
				cout << company[i].bopname << endl;
			break; };
		case 'q': {
			for (int i = 0; i < 3; i++)
				if (company[i].preference == 1)
				{
					cout << company[i].bopname << endl;
					cout << company[i].fullname << endl;
					cout << company[i].title << endl;
					break;
				}
		}
		default: {
			cout << "next chioce:";
			cin >> word;

		};
		}
//		cin.clear(word);
		cout << "next chioce:";
		cin >> word;		
	}
	cout << "bye" << endl;
	return 0;
}

/*��neutronia���������ҵ�λ��tvarp����������˰�ļ��㷽�����£�
5000 tvarp�� ����˰
5001��15000 tvarp��10%
15001��35000 tvarp��15%
35000 tvarp���ϣ�20%
���дһ������ʹ��ѭ����Ҫ���û�����˰�գ�����������˰�����û����븺���������ʱ��ѭ��������
*/
int exercise_2()
{
	using namespace std;
	double tvarp = 0;
	double tax;
	cout << "please input your money" << endl;
	cin >> tvarp;
	while (tvarp >= 0 && isdigit(tvarp))
	{
		cout << "please input your money" << endl;
		cin >> tvarp;
		if (tvarp <= 5000)
			tax = 0;
		else if (tvarp <= 15000)
			tax = 5000 * 0.0 + (tvarp - 5000)*0.10;
		else if (tvarp <= 35000)
			tax = 5000 * 0.0 + 10000 * 0.10 + (tvarp - 5000 - 10000)*0.15;
		else tax = 5000 * 0.0 + 10000 * 0.10 + 20000 * 0.15 + (tvarp - 5000 - 10000 - 20000)*0.20;
		cout << "tax: " << tax << endl;
	}
	return 0;
}

/*
��дһ�����򣬼�¼��������ά���Ϸ�Ȩ�����塱���ʽ𣬸ó���Ҫ���û������������Ŀ��Ȼ��Ҫ���û�����ÿһ��������
�������Ϳ����Щ��Ϣ��������һ����̬����Ľṹ�����У�ÿ���ṹ��������Ա�����������������ַ����飨��string����
��������������double��Ա����ȡ�������ݺ󣬻��轫��ʾ���еľ���10000�ľ���ߵ�����������������б�ǰӦ����
һ�����⣬ָ������ľ��������Ҫ����ˡ�Ȼ�󣬳����г������ľ���ߣ����б�Ҫ��patrons��ͷ�����ĳ�����û�о���ߣ�
����򽫴�ӡ���ʡ�none�����ó���ֻ��ʾ��������𣬶�����������
*/

struct fund
{
	char name[10];
	double document;
};
void exercise_3()
{
	using namespace std;
	fund *ps = new fund[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "input your name" << endl;
		cin.get(ps[i].name, 10).get();
		cout << "input your money" << endl;
		cin >> ps[i].document;
		cin.get();
	}
	for (int i = 0; i < 10; i++)
	{
		if (ps[i].document >= 10000)
			cout << "grand patrons" << endl;
		cout << ps[i].document;
		cout << ps[i].name;
	}
}

/*
��дһ��������ÿ�ζ�ȡһ�����ʣ�ֱ���û�ֻ����q��Ȼ�󣬸ó���ָ���ж��ٸ���Ԫ����ͷ���ж��ٸ������Ը�����ͷ�����ж��ٸ�
���ʲ����������ࡣΪ�ˣ�����֮һ�ǣ�ʹ��isalpha��������������ĸ�������ַ���ͷ�ĵ��ʣ�Ȼ��ͨ����isalpha�������Եĵ��ʣ�ʹ��
if����switch�����ȷ����Щ��Ԫ����ͷ��
*/
void exercise_4()
{
	using namespace std;
	cout << "enter words(q to quit):" << endl;
	char words[20];
	int  vowels = 0, consonants = 0, others = 0;
	while (cin>>words)
	{
		if (words[0] == 'q'&&words[1]=='\0')
			break;
		if (!isalpha(words[0]))
		{
			others++;
			continue;
		}
		if (words[0] == 'a' || words[0] == 'e' || words[0] == 'i' || words[0] == 'o' || words[0] == 'u'||words[0] == 'A' || words[0] == 'E' || words[0] == 'I' || words[0] == 'O' || words[0] == 'U')
			vowels++;
		else consonants++;
		cin.clear();
	}
	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << others << " others" << endl;
}