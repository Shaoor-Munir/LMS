#pragma once

#include<iostream>
#include<vector>
#include<string>
#include"LibItem.h"

using namespace std;

class DVD : public LibItem {
	string category;

public:
	DVD(string name = "", string genre = "");
	string get_category();
	string return_type();
};