#include "LMS.h"
#include"User.h"
#include"LibItem.h"
#include"Book.h"
#include"DVD.h"

LMS::LMS()
{
	cout << "Library management system initiated." << endl;
}

void LMS::add_LibItem(LibItem * item)
{
	this->items.push_back(item);
}

bool LMS::add_User(User * user)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i]->get_username() == user->get_username)
			return false;
	}
	users.push_back(user);
	return true;
}

LibItem * LMS::search_LibItem(string type, string name)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->return_type() == type && items[i]->get_name() == name)
			return items[i];
	}
}

vector<Book*> LMS::author_search_book(string author)
{
	vector <Book *> temp;

	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->return_type() == "Book")
		{
			if (((Book*) items[i])->get_author() == author)
			{
				temp.push_back((Book *)items[i]);
			}
		}
	}

	return temp;
}

vector<DVD*> LMS::category_search_dvd(string category)
{
	vector <DVD *> temp;

	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->return_type() == "DVD")
		{
			if (((DVD *)items[i])->get_category() == category)
			{
				temp.push_back((DVD *)items[i]);
			}
		}
	}

	return temp;
}

bool LMS::remove_LibItem(LibItem * in)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i] == in)
		{
			items.erase(items.begin() + i);
			return true;
		}
	}

	return false;
}

bool LMS::remove_user(string username)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i]->get_username() == username)
		{
			users.erase(users.begin() + i);
			return true;
		}
	}

	return false;
}
