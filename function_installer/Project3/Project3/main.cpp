/*
��дһ��������������һ��ָ��string�����������Ϊ������������string���������ת��Ϊ��д��Ϊ�˿�ʹ�ñ�6.4�����ĺ���
toupper������Ȼ���дһ����������ͨ��ʹ��һ��ѭ�������ܹ��ò�ͬ����������������������ó��������������£�
enter a string ��q to quit): go away
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
