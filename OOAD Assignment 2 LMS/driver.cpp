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

	User * u1 = new Student("Shaoor_Munir", "ShaoorMunir");

	User * u2 = new Student("Haider Ali", "HAli");
	
	User * u3 = new Student("Ghufran Ahmed", "GAhmed");

	User * u4 = new Student("Muhammad Saad Tariq", "MTariq");

	User * u5 = new Student("Haseeb Ahmed", "HAli");


	library.add_User(u1);
	library.add_User(u2);
	library.add_User(u3);
	library.add_User(u4);
	library.add_User(u5);



	return 0;


}