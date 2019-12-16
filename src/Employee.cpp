#include <sstream>
#include "Employee.h"

Employee::Employee() {
	name = "udefined";
	age = 0;
}

string Employee::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

