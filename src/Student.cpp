#include <sstream>
#include "Student.h"

Student::Student() {
	age = 0;
	name = "";
}

Student::Student(string name, int age) {
	this->name =  name;
	this->age = age;

	cout << "Memory location of object: " << this << endl;
}

string Student::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "Age: ";
	ss << age;

	return ss.str();
}
