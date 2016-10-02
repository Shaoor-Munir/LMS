#include<iostream>
#include<string>
#include"LMS.h"
#include"User.h"
#include"Student.h"
#include"LibItem.h"
#include"Book.h"
#include"DVD.h"
using namespace std;

int main() {

	LMS library;

	User * u = new Student("Shaoor_Munir", "ShaoorMunir");

	library.add_User(u);

	return 0;


}