#include "LibItem.h"

LibItem::LibItem(string name)
{
	this->name = name;
	this->count++;
	char *temp;
	itoa(count, temp, 10);
	this->id = temp;
}

void LibItem::add_loanItem(LoanItem * item)
{
	this->loans.push_back(item);
}

string LibItem::get_name()
{
	return this->name;
}
