//static.cpp--using a static local variale
#include <iostream>
#include <string>
//constants

//const int ArSize = 10;
//function prototype
//void strcount(const char*str);
void strcount(const std::string str);

int main()
{
	using namespace std;
	//char input[ArSize];
	string input;
	//char next;
	cout << "enter a line:\n";
	//cin.get(input, ArSize);
	getline(cin, input);
	while (input!="")
	{
		//cin.get(next);
		//while (next != '\n')
			//cin.get(next);
		//strcount(input);
		//cout << "enter next line(empty line to quit):\n";
		//cin.get(input, ArSize);
		strcount(input);
		cout << "enter next line(empty line to quit):\n";
		getline(cin, input);
	}
	cout << "bye\n";
	return 0;
}
/*
void strcount(const char*str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\"contain ";
	while (*str++)
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
*/

void strcount(const std::string str)
{
	using namespace std;
	static int total = 0;
	cout <<"\" "<<str<<"\" contain";
	total += str.length();
	cout << str.length() << " characters\n";
	cout << total << " characters total\n";
}