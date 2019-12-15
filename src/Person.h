/*
 * Person.h
 *
 *  Created on: 15 Dec 2019
 *      Author: hendrylim
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;

public:
	Person();
	string toString();
	void setName(string setName);
	string getName();
};

#endif /* PERSON_H_ */
