/*
编写一个函数，他接受一个指向string对象的引用作为参数，并将该string对象的内容转换为大写，为此可使用表6.4描述的函数
toupper（）。然后编写一个函数，它通过使用一个循环让您能够用不同的输入来测试这个函数，该程序的运行情况如下：
enter a string （q to quit): go away
GO AWAY
Next sting(q to quit): good gtief;
GOOD GTIEF;
Next string (q to quit);q
Bay.
*/

#include <iostream>
#include <string>
#include <cctype>

void word(std::string&word);

int main()
{
	using namespace std;
	cout << "Enter a string(q to quit): ";
	string words;
	cin >> words;
	while (words != "q")
	{
		word(words);
		cout << words << endl;
		cout << "Next string (q to quit): ";
		cin >> words;
	}
	cout << "Bye" << endl;
}

void word(std::string&word)
{
	for (int i = 0; i < word.length(); i++)
		if (isalpha(word[i]))
		{
			word[i] = toupper(word[i]);
		}
}
