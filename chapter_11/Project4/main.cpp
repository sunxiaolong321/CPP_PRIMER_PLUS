//main.cpp

#include <iostream>
#include "Time.h"

int main()
{
	using std::cout;
	using std::endl;
	TIME aida(3, 35);
	TIME tosca(2, 45);
	TIME temp;
	cout << "aida and tosca: \n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "aoda + tosca: " << temp << endl;
	temp = aida * 1.17;
	cout << "aida * 1.17: " << temp << endl;
	cout << "10*tocas: " << 10.0*tosca << endl;

}
