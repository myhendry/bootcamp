#include <iostream>
#include <sstream>

#include "utils.h"
#include "Cat.h"
#include "Head.h"
#include "Dog.h"
#include "Zebra.h"
#include "Person.h"
#include "Employee.h"

using namespace std;

void printData()
{
  cout << "Print Data" << endl;
}

void processSelection()
{
  int input;
  cout << "Enter a number: " << flush;
  cin >> input;

  switch (input)
  {
  case 1:
    cout << "you pressed 1" << endl;
    break;
  case 2:
    cout << "you pressed 2" << endl;
    break;
  case 3:
    cout << "you pressed 3" << endl;
    break;
  default:
    cout << "you pressed something else" << endl;
  }
}

void chooseSelection(int num)
{
  switch (num)
  {
  case 1:
    cout << "you pressed 1" << endl;
    break;
  case 2:
    cout << "you pressed 2" << endl;
    break;
  case 3:
    cout << "you pressed 3" << endl;
    break;
  default:
    cout << "you pressed something else" << endl;
  }
}

string printString()
{
  return "hello world";
}

//! 30A HEADERS & PROTOTYPES
// void doSomething(); // Using Prototype - Implementation of main function after main()


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

	  const string password = "password";
	  string codeWord = "hello";
	  string input;
	  // int selection;
	  // int i = 0;

	  //! 30B HEADERS & PROTOTYPES
	  // doSomething();

	  //! FUNCTION PARAMETERS
	  // int num;
	  // cout << "Enter a number " << flush;
	  // cin >> num;

	  // chooseSelection(num);

	  //! 28 RETURN VALUES
	  // string returnVal = printString();
	  // cout << returnVal << endl;

	  //! 27 FUNCTIONS
	  // printData();
	  // processSelection();

	  //! SWITCH
	  //* Cannot use variable in case. Can only use CONSTANT

	  // int value = 5;
	  // const int constantValue = 4;

	  // switch (value)
	  // {
	  // case constantValue:
	  //   cout << "Value is 4" << endl;
	  //   break;
	  // case 5:
	  //   cout << "Value is 5" << endl;
	  //   break;
	  // case 6:
	  //   cout << "Value is 6" << endl;
	  //   break;
	  // default:
	  //   cout << "Unrecognized value" << endl;
	  // }

	  //! SIZE OF MULTI-DIMENSIONAL ARRAY
	  // string animals[][3] = {
	  //     {"fox", "dog", "cat"},
	  //     {"mouse", "squirrel", "parrot"}};

	  // cout << "Size of animals " << sizeof(animals) << endl;
	  // cout << "Size of animals[0] " << sizeof(animals[0]) << endl;
	  // cout << "Size of animals / Size of animals[0] " << sizeof(animals) / sizeof(animals[0]) << endl;
	  // cout << "Size of string " << sizeof(string) << endl;
	  // cout << "Size of animals[0] / Size of string " << sizeof(animals) / sizeof(string) << endl;

	  // for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
	  // {
	  //   for (int j = 0; j < sizeof(animals[0]) / sizeof(string); j++)
	  //   {
	  //     cout << animals[i][j] << " " << flush;
	  //   }
	  //   cout << endl;
	  // }

	  //! SIZEOF AND ARRAY
	  // string stringList[] = {"Soccer", "Basketball", "Tennis"};

	  // cout << "Size of stringList " << sizeof(stringList) << endl;
	  // cout << "Size of string " << sizeof(string) << endl;
	  // cout << "Size of stringList / string " << sizeof(stringList) / sizeof(string) << endl;

	  // int values[] = {3, 6, 7, 8};

	  // for (i = 0; i < sizeof(values) / sizeof(int); i++)
	  // {
	  //   cout << values[i] << endl;
	  // }

	  //! MULTI-DIMENSIONAL ARRAYS
	  // string animals[2][3] = {
	  //     {"fox", "dog", "cat"},
	  //     {"mouse", "squirrel", "parrot"}};

	  // for (int i = 0; i < 2; i++)
	  // {
	  //   for (int j = 0; j < 3; j++)
	  //   {
	  //     cout << animals[i][j] << " " << flush;
	  //   }

	  //   cout << endl;
	  // }

	  //! ARRAYS
	  //* declaring number of elements in array is optional, use for loop to iterate through array, BE CAREFUL!!! uninitialized elements in array C++ will pluck in random values from memory
	  // int notDeterminedArr[] = {1, 3, 5};
	  // for (i = 0; i < 3; i++)
	  // {
	  //   cout << notDeterminedArr[i] << endl;
	  // }

	  // string stringArray[3] = {"Apple", "Banana", "Orange"};
	  // cout << stringArray[1] << endl;
	  // for (i = 0; i < 3; i++)
	  // {
	  //   cout << stringArray[i] << endl;
	  // }

	  // // Return Empty String Array
	  // string emptyArray[3] = {};
	  // for (i = 0; i < 3; i++)
	  // {
	  //   cout << emptyArray[i] << endl;
	  // }

	  // double numbers[3] = {1.2, 4.6, 6};
	  // cout << numbers[2] << endl;

	  // for (i = 0; i < 3; i++)
	  // {
	  //   cout << numbers[i] << endl;
	  // }

	  // int zeroArray[5] = {};

	  // // Return 5 Zeros
	  // for (i = 0; i < 5; i++)
	  // {
	  //   cout << zeroArray[i] << endl;
	  // }

	  //! CAUTION: ARRAY - if not declared, C++ will take random data at the memory. will generate warning in terminal except in for loop
	  // int values[3] = {2, 5, 7};
	  // // cout << values[3] << endl;
	  // for (i = 0; i < 4; i++)
	  // {
	  //   cout << values[i] << endl;
	  // }

	  //! CONSOLE
	  // cout << "Apple"
	  //      << "Banana"
	  //      << "Orange" << flush;
	  // cout << "Happy Happy" << endl;

	  //! DO-WHILE AND BREAK
	  // do
	  // {
	  //   cout << "Enter password: " << flush;
	  //   cin >> input;

	  //   if (input == password)
	  //   {
	  //     break;
	  //   }
	  //   else
	  //   {

	  //     cout << "Access denied" << endl;
	  //   }
	  // } while (true);

	  // cout << "Password Accepted" << endl;

	  //! CONTINUE
	  // for (int i = 0; i < 5; i++)
	  // {
	  //   cout << "i is " << i << endl;

	  //   if (i == 3)
	  //   {
	  //     continue;
	  //   }

	  //   cout << "Looping... " << endl;
	  // }

	  // cout << "Program quitting..." << endl;

	  //!  BREAK
	  // for (int i = 0; i < 5; i++)
	  // {
	  //   cout << "i is " << i << endl;

	  //   if (i == 3)
	  //   {
	  //     break;
	  //   }
	  // }

	  //! FOR LOOP
	  // for (int i = 0; i < 5; i++)
	  // {
	  //   cout << "For Loop " << i << endl;
	  // }

	  //! DO-WHILE 2
	  // do
	  // {
	  //   cout << "Enter password: " << endl;
	  //   cin >> input;
	  //   if (input != password)
	  //   {
	  //     cout << "Access Denied" << endl;
	  //   }
	  // } while (input != password);

	  // cout << "Password Accepted" << endl;

	  //! DO-WHILE
	  // do
	  // {
	  //   cout << "Running do-while" << endl;
	  //   i++;
	  // } while (i < 3);

	  //! !!
	  // bool num = !!3;
	  // cout << num << endl;

	  //! WHILE
	  // while (i < 3)
	  // {
	  //   cout << "Ran while" << endl;
	  //   i++;
	  // }

	  //! IF ELSE ELSE IF
	  /*
	  cout << "Enter your Selection: " << flush;
	  cin >> selection;

	  if (selection == 1)
	  {
	    cout << "You have selected 1" << endl;
	  }
	  else if (selection == 2)
	  {
	    cout << "You have chosen 2" << endl;
	  }
	  else
	  {
	    cout << "You have selected others" << endl;
	  }
	  */

	  //! IF ELSE
	  /*
	  cout << "Enter your Codeword: " << flush;
	  cin >> input;

	  if (input == codeWord)
	  {
	    cout << "Codeword accepted!" << endl;
	  }
	  else
	  {
	    cout << "Wrong Codeword" << endl;
	  }
	*/

	cout << "Ending program..." << endl;
	return 0;
}

void doSomething()
{
  cout << "Hello! Do something" << endl;
}
