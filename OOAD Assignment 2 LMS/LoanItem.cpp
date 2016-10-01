#include "LoanItem.h"

LoanItem::LoanItem(User * u, LoanItem * item)
{
	this->u = u;
	this->item = item;
	//set iDate to current date
}
