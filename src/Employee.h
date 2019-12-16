#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int age;
public:
	Employee();
	Employee(string newName) { name = newName; age = 0; };
	Employee(string newName, int newAge) { name = newName; age = newAge; }
	string toString();
};

#endif /* EMPLOYEE_H_ */
