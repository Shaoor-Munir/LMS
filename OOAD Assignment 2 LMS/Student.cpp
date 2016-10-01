#include "Student.h"

Student::Student(string name):User(name)
{
}

string Student::return_type()
{
	return "user";
}
