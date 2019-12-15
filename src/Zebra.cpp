#include <iostream>
#include "Zebra.h"

using namespace std;

Zebra::Zebra() {
	cout << "Zebra created" << endl;

	peaceful = false;
}

Zebra::~Zebra() {
	cout << "Zebra destroyed" << endl;
}

void Zebra::groan() {
	if (peaceful) {
		cout << "Raaaaaa" << endl;
	} else {
		cout << "Grrrrrr" << endl;
	}
}
