#include "golf.h"
#include <iostream>

int main()
{
	using namespace std;
	cout << "please input your struct\n";
	golf h[10];
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (!(setgolf(h[i])))
			break;
		int score;
		cout << "please inpur your score\n";
		cin >> score;
		cin.get();
		cin.clear();
		handicap(h[i], score);
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		if (h[i].fllname[0] == '\0')
			break;
		showgolf(h[i]);
	}
  }