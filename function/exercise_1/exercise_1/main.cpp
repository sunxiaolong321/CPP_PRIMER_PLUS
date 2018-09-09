#include <iostream>
#include <cctype>
#include <array>
#include <string>
/*
��дһ������Ҫ�󲻶�Ҫ���û�������������֪������һ����Ϊ0������ÿ������������ʹ��һ���������������ǵĵ���ƽ�������������
���ظ�mian�������߽�������������ƽ����ָ���ǵ���ƽ��ֵ�ĵ��������㹫ʽ����
����ƽ���� = 2.0*x*y/(x+y)
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
��дһ������Ҫ���û��������10���߶���ɼ���������洢��һ�������С����������û�����������룬����һ������ʾ���гɼ�
��Ȼ�󱨸�ƽ���ɼ�����ʹ��3�����鴦�������ֱ�����������ʾƽ���ɼ�*/
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
		if (mark[i] == -1)//����-1��������
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
������һ���ṹ����
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
}
a.��дһ����������ֵ����box�ṹ������ʾÿ����Ա��ֵ
b.��дһ������������box�ĵ�ַ������volume��Ա����Ϊ������ά���ȵĳ˻�
c.��дһ��ʹ�������������ļ򵥳���
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
����ݵĻ���ʹ�ý�������Ʊ�淨�ı��塣����Щ�淨�У���Ҵ�һ�鱻��Ϊ�����ĺ�����ѡ�񼸸������磬���Դ������1��47��ѡ��
5�����룻�����Դӵڶ������䣨��1-27��ѡ��һ�����루��Ϊ��ѡ���룩��ҪӮ��ͷ����������ȷ�������еĺ��롣��ͷ���ļ�����ѡ��
���������ļ�����ѡ����ѡ����ļ��ʵĳ˻������磬����������У���ͷ���ļ����Ǵ�47����������ȷѡȡ5������ļ������27����
������ȷѡ��1������ļ��ʵĳ˻������޸ĳ����嵥7.4���Լ������ֲ�Ʊͷ���ļ��ʡ�
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
����һ���ݹ麯��������һ�����Ͳ����������ظò����Ľ׳ˡ�ǰ�潲����3�Ľ׳�д��3��������3*2�����Դ����ƣ���0��������Ϊ1.ͨ��
�ļ��㹫ʽ�ǣ����n�����㣬��n!=n*(n-1)!,�ڳ����жԸú������в��ԣ�����ʹ��ѭ�����û����벻ͬ��ֵ�����򽫱�����Щֵ�Ľ׳�
*/

int factorial(int x)
{
	if (x == 0)
		return 1;
	return x * factorial(x - 1);
}

/*
��дһ������������ʹ�����к���
fill_array()��һ��double��������ƺͳ�����Ϊ����������ʾ�û�����doubleֵ��������Щֵ�洢�������С������鱻����
���û������˷�����ʱ�����뽫ֹͣ��������ʵ�������˶��ٸ�����
show_array()��һ��double��������ƺͳ�����Ϊ����������ʾ��������
reverse_array()��һ��double��������ƺͳ�����Ϊ�����������洢�������е�ֵ��˳��ת
����ʹ����Щ������������飬Ȼ����ʾ���飻��ת���飬Ȼ����ʾ���飻��ת�����г���һ�������һ��Ԫ��֮�������Ԫ�أ�
Ȼ����ʾ����
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
�޸ĳ����е�3�����鴦������ʹ֮ʹ������ָ���������ʾ���䡣fill_array()����������ʵ�ʶ�ȡ�˶��ٸ����֣����Ƿ���һ��ָ�룬
��ָ��ָ���������λ�ã������ĺ������Խ���ָ����Ϊ�ڶ����������Ա�ʶ���ݽ�β
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
�ڲ�ʹ��array()���������ɳ�����Ĺ�������д���������İ汾��
1.ʹ��const char*����洢��ʾ�������Ƶ��ַ�������ʹ��double����洢��֧
2.ʹ��const char*����洢��ʾ�������Ƶ��ַ�������ʹ��һ���ṹ���ýṹֻ��һ����Ա����һ�����ڴ洢��֧��double���飬������ƺ�ʹ��
array��Ļ����������
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
�����ϰ������д��������ͽṹ�ĺ����������ǳ���Ŀ�ܣ����ṩ���������ĺ���������ɸó���

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
���һ����Ϊcalculate()�ĺ���������������doubleֵ��һ��ָ������ָ�룬����ָ��ĺ�����������double������
������һ��doubleֵ��calculate()����������Ҳ��double�������ر�ָ��ĺ���ʹ��calculate()������double��������
�õ���ֵ�����磬����add()�����Ķ������£�
double add(double x, double y)
{
	return x + y;
}
�����������еĺ������ý�����calcute()��2.5��10.4���ݸ�add������������add()�ķ���ֵ(12.9):
double q = calculate(2.5,10.4,add);
���дһ��������������������������������һ����add()���Ƶĺ������ó���ʹ��ѭ�������û��ɶԵ��������֡�����ÿ��
���֣���������calculate()������add()������һ�������ĺ�����������߰�ð�գ����Գ��Դ���һ��ָ�����飬���е�ָ��
ָ��add()��ʽ�ĺ���������дһ��ѭ����ʹ����Щָ��������calculate()������Щ��������ʾ����������������ָ������ķ�ʽ��
���а�������ָ�룺
double ��*pf[3])(double, double);
���Բ��������ʼ���﷨��������������Ϊ��ַ����ʼ�����������顣
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