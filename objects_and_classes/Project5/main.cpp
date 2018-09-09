#include <iostream>
#include "customer.h"

int main()
{
	using namespace std;
	customers st;
	char ch;
	customer po;
	cout << "please enter a to add a structure.\n"
		<< "P to process, or q to quit,\n";
while (cin >> ch && isupper(ch) != 'q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "enter your fullname to add:\n";
			cin.get(po.fullname, 35).get();
			while (cin.get() != '\n')
				continue;
			cout << "enter your payment to add\n";
			cin >> po.payment;
			if (st.isfull())
				cout << "stack already full\n";
			else st.push(po);
				break;
		case 'p':
		case 'P':
			if (st.isempty())
				cout << "stack already empty\n";
			else {
				st.pop(po);
				cout << "po #" << po.fullname << endl << "the payment is " << po.payment << endl;
			}
			break;
		}
		cout << "please enter a  to add a customer\n" << "and p to pop a customer\n and q to quit\n";
	}
	cout << "baibai\n";
	return 0;
}