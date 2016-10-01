#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<ctime>

using namespace std;

class LoanItem;

class User {

protected:
	string name;
	string user_name;
	vector <LoanItem *> loans;

public:
	User(string name ="", string uname="");
	void add_loanItem(LoanItem *item);
	string get_username();
	string get_name();
	virtual string return_type() = 0;

};