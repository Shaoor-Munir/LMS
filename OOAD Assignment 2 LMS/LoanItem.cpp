#include "LoanItem.h"
#include"User.h"
#include"LibItem.h"

LoanItem::LoanItem(User * u, LibItem * item)
{
	this->isReturned = false;
	this->u = u;
	this->item = item;
	this->u->add_loanItem(this);
	this->item->add_loanItem(this);

	//set iDate to current date
	time_t t = time(0);
	struct tm * now = localtime(&t);
	this->iDate = to_string(now->tm_mday) + "-" + to_string(now->tm_mon + 1) + "-" + to_string(now->tm_year + 1900);
}

void LoanItem::returnItem()
{
	this->isReturned = true;
}

bool LoanItem::check_status()
{
	return isReturned;
}
