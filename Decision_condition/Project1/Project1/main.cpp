#include <iostream>
#include <cctype>
/*加入benevolent order of programer后，在BOP大会上，人们便可以通过加入者额真实姓名，头衔或秘密BOP
姓名来了解他（她）。请编写一个程序，可以使用真实名字、头衔、秘密姓名或成员偏好来列出群员。
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
	bop company[10];//创建结构数组
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

/*在neutronia王国，货币单位是tvarp，收入所得税的计算方法如下：
5000 tvarp： 不收税
5001—15000 tvarp：10%
15001—35000 tvarp：15%
35000 tvarp以上：20%
请编写一个程序，使用循环来要求用户输入税收，并报告所得税。但用户输入负数或非数字时，循环将结束
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
编写一个程序，记录捐助给“维护合法权利团体”的资金，该程序要求用户输入捐助者数目，然后要求用户输入每一个捐助者
的姓名和款项。这些信息被储存在一个动态分配的结构数组中，每个结构有两个成员；用来储存姓名的字符数组（或string对象）
和用来储存款项的double成员，读取所有数据后，还需将显示所有的捐款超过10000的捐款者的姓名及其捐款数额。该列表前应包含
一个标题，指出下面的捐款者是重要捐款人。然后，程序将列出其他的捐款者，该列表要以patrons开头，如果某种类别没有捐款者，
则程序将打印单词“none”。该程序只显示这两种类别，而不进行排序。
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
编写一个程序，他每次读取一个单词，直到用户只输入q。然后，该程序指出有多少个以元音打头，有多少个单词以辅音打头，还有多少个
单词不属于这两类。为此，方法之一是，使用isalpha（）来区分以字母和其他字符打头的单词，然后都通过了isalpha（）测试的单词，使用
if或者switch语句来确定那些以元音打头。
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