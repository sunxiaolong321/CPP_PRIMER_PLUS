#include <iostream>
#include <cctype>
#include <array>
#include <string>
/*
编写一个程序，要求不断要求用户输入两个数，知道其中一个的为0。对于每两个数，程序将使用一个函数来计算他们的调和平均数，并将结果
返回给mian，而后者将报告结果。调和平均数指的是倒数平均值的倒数，计算公式如下
调和平均数 = 2.0*x*y/(x+y)
*/
double count_backwards(double x, double y);
void exercise_1()
{
	using namespace std;
	double x,y, sum;
	while (true)
	{
		cout << "input x: ";
		if (!(cin >> x))
		{
			cin.clear();
			cin.get();
			continue;
		}cout << "input y: ";
		if (!(cin >> y))
		{
			cin.clear();
			cin.get();
			continue;
		}
		if (x == 0 || y == 0)
			break;
		sum = count_backwards(x, y);
		cout << "the count backwards is" << sum << endl;
	}
}

double count_backwards(double x, double y)
{
	double sum;
	sum = 2.0*x*y / (x + y);
	return sum;
}

/*
编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存储在一个数组中。程序允许用户提早结束输入，并在一行上显示所有成绩
，然后报告平均成绩。请使用3个数组处理函数并分别进行输入和显示平均成绩*/
int input_mark(double mark[]);
void show_mark(double mark[], int count);
double show_average_mark(double mark[], int count);
void exercise_2()
{
	double mark[10];
	int count_mark;
	count_mark = input_mark(mark);
	show_mark(mark,count_mark);
	double average_mark=show_average_mark(mark, count_mark);
	std::cout << "the average is" << average_mark << std::endl;
}
int input_mark(double mark[])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		std::cout << "please input your mark:";
		if (!(std::cin >> mark[i]))
		{
			std::cin.clear();
			std::cin.get();
			continue;
		}
		if (mark[i] == -1)//输入-1结束输入
			break;
	}
	return i;
}

void show_mark(double mark[],int count)
{
	for (int i = 0; i < count; i++)
	{
		if (mark[i] == '\0')
			break;
		std::cout << mark[i] << "\t";
	}
	std::cout << std::endl;
}

double show_average_mark(double mark[], int count)
{
	double sum_mark = 0, avrage_mark;
	for (int i = 0; i < count; i++)
	{
		sum_mark += mark[i];
	}
	avrage_mark = sum_mark / (count);
	return avrage_mark;
}

/*
下面是一个结构声明
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
}
a.编写一个函数，按值传递box结构，并显示每个成员的值
b.编写一个函数，传递box的地址，并将volume成员设置为其他三维长度的乘积
c.编写一个使用这两个函数的简单程序
*/
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_struct(box box)
{
	std::cout << box.maker << "\t";
	std::cout << box.height << "\t";
	std::cout << box.width << "\t";
	std::cout << box.length << "\t";
	std::cout << box.volume;
}

void show_address(box &box)
{
	box.volume = box.length*box.height*box.width;
	std::cout << box.volume;
}

/*
许多州的机构使用舰导弹彩票玩法的变体。在这些玩法中，玩家从一组被称为域号码的号码中选择几个。例如，可以从域号码1—47中选择
5个号码；还可以从第二个区间（如1-27）选择一个号码（称为特选号码），要赢得头奖，必须正确猜中所有的号码。中头奖的几率是选中
所有域号码的几率与选中特选号码的几率的乘积。例如，在这个例子中，中头奖的几率是从47个号码中正确选取5个号码的几率与从27个号
码中正确选择1个号码的几率的乘积。请修改程序清单7.4。以计算这种彩票头奖的几率。
*/
long double interval(int choice, int interval1, int interval2)
{
	long double probilaty = 1;
	for (int i = 0; i < choice; i++)
		probilaty *= 1 / (interval1 - i);
	probilaty *= 1 / interval2;
	return probilaty;
}

/*
定义一个递归函数，接受一个整型参数，并返回该参数的阶乘。前面讲过，3的阶乘写作3！，等于3*2！，以此类推，而0！被定义为1.通用
的计算公式是，如果n大于零，则n!=n*(n-1)!,在程序中对该函数进行测试，程序使用循环让用户输入不同的值，程序将报告这些值的阶乘
*/

int factorial(int x)
{
	if (x == 0)
		return 1;
	return x * factorial(x - 1);
}

/*
编写一个函数，他将使用下列函数
fill_array()将一个double数组的名称和长度作为参数。它提示用户输入double值，并将这些值存储到数组中。当数组被填满
或被用户输入了非数字时，输入将停止。并返回实际输入了多少个数字
show_array()将一个double数组的名称和长度作为参数，并显示数组内容
reverse_array()将一个double数组的名称和长度作为参数，并将存储在数组中的值的顺序反转
程序将使用这些函数来填充数组，然后显示数组；反转数组，然后显示数组；反转数组中除第一个和最后一个元素之外的所有元素，
然后显示数组
*/

int fill_array(double name[], int n)
{
	using namespace std;
	double temp;
	int i;
	for (int i = 0; i < n; i++)
	{
		cout << "enter your double digit:" << endl;
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "bad input\n";
			break;
		}
		else if (temp < 0)
			break;
		name[i] = temp;
	}
	return i;
}

void show_array(const double name[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)    
	{
		cout << (i+1) << "\t" << name[i] << endl;
	}
}

int reverse_array(double name[], int n)
{
	double x;
	for (int i = 0; i < sizeof(name); i++)
	{
		name[0] = x;
		name[0] = name[sizeof(name) - i - 1];
		name[sizeof(name) - i - 1] = x;
	}
}
/*
修改程序中的3个数组处理函数，使之使用两个指针参数来表示区间。fill_array()函数不返回实际读取了多少个数字，而是返回一个指针，
该指针指向最后被填充的位置，其他的函数可以将该指针作为第二个参数，以标识数据结尾
*/
double fill_array1(const double * begin,const double * end)
{
	using namespace std;
	double temp;
	const double * pt;
	for (pt = begin; pt!=end; pt++)
	{
		cout << "enter your double digit:" << endl;
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "bad input\n";
			break;
		}
		else if (temp < 0)
			break;
		pt = &temp;
	}
	return *pt;
}

void show_array1(const double * begin, const double * end)
{
	using namespace std;
	const double * pt;
	int i = 0;
	for (pt = begin; pt!=end; pt++)
	{
		cout << (i + 1) << "\t" << *pt << endl;
	}
}

int reverse_array1(const double * begin, const double * pt)
{
	double x;
	const double * pl, * ps;
	for (pl = begin,ps=pt; pl!=pt; pl++,pt--)
	{
		pl = &x;
		pl = ps;
		ps = &x;
	}
}
/*
在不使用array()的情况下完成程序表单的工作，编写两个这样的版本：
1.使用const char*数组存储表示季度名称的字符串，并使用double数组存储开支
2.使用const char*数组存储表示季度名称的字符串，并使用一个结构。该结构只有一个成员——一个用于存储开支的double数组，这种设计和使用
array类的基本设计类似
*/

	const int seasons = 4;
	const std::array<std::string, seasons>snames = { "spring","summer","fail","winter" };
	void fill(std::array<double, seasons>*pa);
	void show(std::array<double, seasons>da);
	int main()
	{
		std::array<double, seasons> expenses;
		fill(&expenses);
		show(expenses);
	}
void fill(std::array<double, seasons> *pa)
{
	using namespace std;
	for (int i = 0; i < seasons; i++)
	{
		cout << "enter" << snames[i] << "expenses:";
		cin >> (*pa)[i];
	}
}

void show(std::array<double, seasons> da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nexpenses\n";
	for (int i = 0; i < seasons; i++)
	{
		cout << snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "total" << total << endl;
}
/*
这个练习让您编写处理数组和结构的函数，下面是程序的框架，请提供其中描述的函数，以完成该程序

#include <iostream>
using namespace std;
const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int coplevel;
};
int getinfo(student pa[];int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[],int n);
int main()
{
	cout<<"enter class size:";
	int classic_size;
	cin>>classic_size;
	while(cin.get()!='\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu,class_size);
	for(int i=0;i<entered;i++)
	{	
		display1(ptr_stu[i];
		display2(&ptr_stu[i];
	}
	display3(ptr_stu ,entered);
	delete [] ptr_stu;
	cout<<"done\n";
	return 0;
}
*/

const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int coplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
int main()
{
	using namespace std;
	cout << "enter class size:";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i<entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "done\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	using namespace std;
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "enter fullname\t";
		if (!(cin.get(pa[i].fullname, SLEN).get()))
		{
			cout << "the enter is stop because of a cause" << endl;
			break;
		}
		cout << "enter hobby\t";
		if (!(cin.get(pa[i].hobby, SLEN).get()))
		{
			cout << "the enter is stop because of a cause" << endl;
			break;
		}
		cout << "enter coplevel\t";
		if (!(cin >> pa[i].coplevel))
		{
			cout << "the enter is stop because of a cause" << endl;
			break;
		}
	}
	return i;
}

void display1(student st)
{
	using namespace std;
	cout << "students fullname" << st.fullname << endl;
	cout << "students hobby" << st.hobby << endl;
	cout << "students coplevel" << st.coplevel << endl;
}

void display2(const student * ps)
{
	using namespace std;
	cout << "students fullname" << ps->fullname << endl;
	cout << "students hobby" << ps->hobby << endl;
	cout << "students coplevel" << ps->coplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		using namespace std;
		cout << "students fullname" << pa[i].fullname << endl;
		cout << "students hobby" << pa[i].hobby << endl;
		cout << "students coplevel" << pa[i].coplevel << endl;
	}
}
/*
设计一个名为calculate()的函数，他接受两个double值和一个指向函数的指针，而被指向的函数接受两个double参数，
并返回一个double值。calculate()函数的类型也是double，并返回被指向的函数使用calculate()的两个double参数计算
得到的值，例如，假设add()函数的定义如下：
double add(double x, double y)
{
	return x + y;
}
则下述代码中的函数调用将导致calcute()把2.5和10.4传递给add函数，并返回add()的返回值(12.9):
double q = calculate(2.5,10.4,add);
请编写一个程序，它调用上述两个函数和至少另一个与add()类似的函数。该程序使用循环来让用户成对的输入数字。对于每对
数字，程序都是用calculate()来调用add()和至少一个其他的函数。如果读者爱冒险，可以尝试创建一个指针数组，其中的指针
指向add()样式的函数，并编写一个循环，使用这些指针连续让calculate()调用这些函数。提示，下面是声明这种指针数组的方式。
其中包括三个指针：
double （*pf[3])(double, double);
可以采用数组初始化语法，并将函数名作为地址来初始化这样的数组。
*/
double add(double);
double calculate(double x, double y, double(*pf)(double));

int main()
{
	using namespace std;
	double x, y;
	while (true)
	{
		cout << "input x:\t";
		if (cin >> x)
			break;
		if (cin >> y)
			break;
		double q = calculate(x, y, add);
	}
	cout << endl << "input out" << endl;
}

double add(double x, double y)
{
	return x + y;
}

double calculate(double x,double y, double(*pf)(double))
{

}