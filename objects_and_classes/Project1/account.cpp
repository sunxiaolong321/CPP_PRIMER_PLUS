//account.cpp
#include <string>
#include "account.h"

void bank_account::build(const std::string & na, const std::string & acc, double save)
{
	name = na;
	account = acc;
	saving = save;
}

void bank_account::show_account()
{
	std::cout << "the bank account name is " << name << std::endl;
	std::cout << "the bank account account is " << account << std::endl;
	std::cout << "your saving is " << saving << std::endl;
}

void bank_account::add_saving(double save)
{
	saving += save;
}

void bank_account::remove_saving(double save)
{
	saving -= save;
}
