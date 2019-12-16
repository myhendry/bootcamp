#include <iostream>

using namespace std;

#ifndef TEACHER_H_
#define TEACHER_H_

class Teacher {
private:
	string name;
	int age;
	bool married;
public:
	Teacher(): name("unnamed"), age(0), married(false) {};
	Teacher(string name, int age);
	Teacher(string name, int age, bool married);
	string toString();
};

#endif /* TEACHER_H_ */
