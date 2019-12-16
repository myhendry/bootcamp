#include "Teacher.h"
#include <sstream>

//Teacher::Teacher(): name("unnamed"), age(0), married(false) {
////	name = "James";
////	age = 25;
//}

Teacher::Teacher(string name, int age): name(name), age(age), married(true) {

}

Teacher::Teacher(string name, int age, bool married): name(name), age(age), married(married) {
//	this->name = name;
//	this->age = age;
//  this->married = married;
}

string Teacher::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << " Age: ";
	ss << age;
	ss << " Married: ";
	ss << married;

	return ss.str();
}



