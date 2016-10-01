#pragma once

#include<iostream>
#include<vector>

using namespace std;

class LibItem;
class Book;
class DVD;
class User;
class Student;
class Admin;
class Clerk;

class LMS {
	vector <LibItem*> items;
	vector <User*> users;

public:
	LMS();
	void add_LibItem(LibItem *item);
	bool add_User(User *user);
	LibItem * search_LibItem(string type, string name);
	vector <Book *>author_search_book(string author);
	vector <DVD *>category_search_dvd(string category);
	bool remove_LibItem(LibItem * in);
	bool remove_user(string username);

};