#pragma once

#include<iostream>
#include<vector>
#include<string>
#include"User.h"

using namespace std;

class LoanItem;

class Clerk : public User {


public:
	Clerk(string name = "");
	string return_type();

};