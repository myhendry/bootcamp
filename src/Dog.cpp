#include <iostream>

#include "Dog.h"

using namespace std;

void Dog::bark() {
	if(happy) {
		cout << "Woof Woof" << endl;
	} else {
		cout << "Shhhh" << endl;
	}
}

void Dog::makeHappy() {
	happy = true; // Appropriate way is use constructors to set data values
}

void Dog::makeSad() {
	happy = false; // Appropriate way is use constructors to set data values
}

