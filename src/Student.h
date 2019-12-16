#include <iostream>

using namespace std;


#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
private:
	string name;
	int age;
public:
	Student();
	Student(string name, int age);
	string toString();
};



#endif /* STUDENT_H_ */
