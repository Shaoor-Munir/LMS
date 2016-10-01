#pragma once

#include<iostream>
#include<vector>
#include<string>
#include"User.h"

using namespace std;

class LoanItem;

class Student : public User {


public:
	Student(string name);
	string return_type();
};