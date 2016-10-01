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
	LoanItem * item;
	tm iDate;
	tm rDate;

public:
	LoanItem(User *u = nullptr, LoanItem *item = nullptr);
};