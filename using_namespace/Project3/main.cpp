#include <iostream>

struct chaff
{
	char dross[20];
	int slag;
};

char buffer[512];

int main()
{
	using namespace std;
	chaff *p;
	p = new (buffer) chaff[2];
	strcpy_s(p[0].dross, "nishishei");
	p[0].slag = 100;
	strcpy_s(p[1].dross, "i am xiaozhupeiqi");
	p[1].slag = 250;
	for (int i = 0; i < 2; i++)
	{
		int x = i;
		cout << "the dross " << ++x <<" is "<<p[i].dross<< endl;
		cout << "the slag is " << p[i].slag << endl;
	}
}