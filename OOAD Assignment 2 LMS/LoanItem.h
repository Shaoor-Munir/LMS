#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<ctime>

using namespace std;

class LibItem;
class User;

class LoanItem {
	User * u;
	LibItem * item;
	string iDate;
	string rDate;
	bool isReturned;
public:
	LoanItem(User *u = nullptr, LibItem *item = nullptr);
	void returnItem();
	bool check_status();
};