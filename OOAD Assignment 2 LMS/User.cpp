#include "User.h"

User::User(string name)
{
	this->name = name;
	this->count++;
	char *temp;
	itoa(count, temp, 10);
	this->id = temp;
}

void User::add_loanItem(LoanItem * item)
{
	this->loans.push_back(item);
}

string User::get_username()
{
	return user_name;
}

string User::get_name()
{
	return name;
}
