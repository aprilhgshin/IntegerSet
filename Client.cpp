/*
April Shin
Jonah Moon
CS 137
Homework 2
*/

#include "IntegerSet.h"
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	IntegerSet test(5);
	test.insertElement(3);

	test.insertElement(1);
	test.insertElement(4);
	test.printSet();

	IntegerSet test2(5);
	test2.insertElement(3);

	test2.insertElement(1);
	test2.insertElement(4);
	test2.printSet();

	if (test.isEqual(&test2) == true)
	{
		cout << "true" << endl;
	}

	system("PAUSE");
	return 0;
}