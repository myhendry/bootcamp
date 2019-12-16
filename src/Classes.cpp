#include <iostream>
#include <sstream>

#include "Cat.h"
#include "Head.h"
#include "Dog.h"
#include "Zebra.h"
#include "Person.h"
#include "Employee.h"

using namespace std;

int main() {
	cout <<  "Running program...." << endl;
	Cat cat;
	Dog dog;
	Zebra zebra; // zebra exist within the main scope
	Person person;

	// L36 Overloading Constructors
	Employee employee1;
	Employee employee2("John");
	Employee employee3("Mary", 26);

	cout << employee1.toString() << endl;
	cout << employee2.toString() << endl;
	cout << employee3.toString() << endl;

	// L35 C++ String Stream
	string name = "Bob";
	int age = 22;
	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	string info = ss.str();
	cout << info << endl;

	person.setName("Abraham");
	cout <<  person.toString() << endl;
	cout << "Name of person with get method " << person.getName() << endl;

	zebra.groan();
	show(); // Using header
	cat.speak(); // Using OOP
	cat.jump(); // Using OOP

	dog.makeHappy(); // Using OOP
	dog.bark(); // Using OOP

	{
	// zebra1 exist within this scope only
		Zebra zebra1;
		zebra1.groan();
	}

	cout << "Ending program..." << endl;
	return 0;
}
