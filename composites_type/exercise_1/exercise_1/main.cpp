#include <iostream>
#include <string>
/*输入信息，将下面数组改成string
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "enter your name:\n";
	cin.getline(name, ArSize);
	cout << "enter your favourite dessert\n";
	cin.getline(dessert, ArSize);
	cout << "i have some delicious" << dessert << endl;
	cout << "for you." << name << endl;
}
*/

int main()
{
	using namespace std;
	string dessert, name;
	cout << "enter your name:\n";
	getline(cin, name);
	cout << "enter your favourite dessert\n";
	getline(cin, name);
	cout << "i have some delicious" << dessert << endl;
	cout << "for you." << name << endl;
}

