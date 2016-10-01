#include "DVD.h"

DVD::DVD(string name, string genre):LibItem(name)
{
	this->genre = genre;
}

string DVD::get_category()
{
	return this->genre;
}

string DVD::return_type()
{
	return "dvd";
}
