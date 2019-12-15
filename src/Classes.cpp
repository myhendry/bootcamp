#include <iostream>
#include "Cat.h"
#include "Head.h"
#include "Dog.h"
#include "Zebra.h"
#include "Person.h"

using namespace std;

int main() {
	cout <<  "Running program...." << endl;
	Cat cat;
	Dog dog;
	Zebra zebra; // zebra exist within the main scope
	Person person;

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
