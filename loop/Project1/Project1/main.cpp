/*程序清单
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
	将其改成array数组和long double形式,并计算100！
	*/
#include <iostream>
#include <array>
#include <iomanip>
#include <cstring>
#include <string>

void exercise_1(int x)
{
	std::array<long double,101> df;//创建array数组
	df[0] = df[1] = 1;
	for (int x = 2; x < 101; x++)
		df[x] = x * df[x - 1];
	for(int x = 0;x<101;x++)
		std::cout << x << "!=" << df[x] << std::endl;	
}

//编写一个要求用户输入数字的程序，每次输入后，程序都将报告到目前为止。所有输入的累计和，当用户输入0时，程序结束
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

/*daphne以10%的单利投资了100美元，也就是说，每一年的利润都是投资额的10%，即每年10美元:
而利息=0.10*原始存款
而cleo以5%的复利投资了100美元，也就是说，利息是当前存款（包括获得的利息）的5%
利息= 0.05*当前存款
cleo在第一年投资100美元的盈利是5%，得到了105美元，下一年盈利是105美元的5%
编写一个程序，计算多少年后cleo的投资价值才能超过daphne的投资价值，并显示此时两者的投资价值
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

/*请编写一个程序，输入全年每个月的销售量，程序通过循环，使用初始化为月份字符串的char*数组或者（string对象数组）
逐月进行提示，并将输入的数据储存在一个int数组中，然后，程序计算数组中各元素的总数，并报告这一年的销售情况*/
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

//用二维数组完成上述输入，3年中每个月的销售量，程序将报告3年每年的销售量和总销售量
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

/*设计一个名为car的结构，用它来存储下述有关汽车的信息，生产商（存储在字符数组或string对象中的字符串）、生产年份（整数）。
编写一个程序，向用户询问有多少俩汽车。
随后，程序使用new来创建一个由对应数量的car结构组成的动态数组。
接下来，程序提示用户输入每辆车的生产商（可能有多个单词组成）和年份信息。
请注意，这需要特别小心，因为它将交替读取数值和字符串。最后程序将显示每个结构的内容
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

/*编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。
随后，该程序指出用户输入了多少个单词（不包括done在内）。
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

//编写一个满足前一个练习中描述的程序，但是用sting对象而不是字符数组，请在程序中包含头文件string，并使用关系运算符进行比较测试
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

/*编写一个使用嵌套函数的程序，要求用户输入一个值，指出要显示多少行。
然后，程序将显示相对应的星号，其中第一行包括一个星号，第二行包括两个星号，以此类推。
每一行包含的字符数等于用户指定的函数，在星号前面加上句点
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