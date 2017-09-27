/*
April Shin
Jonah Moon
CS 137
Homework 2

*******************************************************************************************
                                IntegerSet
-------------------------------------------------------------------------------------------
	-intSet1[]
	destructor
	unionOfSets(either 2 integerset parameter or one)
	-makes a third integerset that has one or both)
	intersectionOfSets(either 2 intset or one)
	-makes a third set that has both
	insertElement(int k into the set by setting a[k] to 1
	deleteElement(deletes m in the set by a[m] to 0)
	PrintSet(print ---- for empty set, 
	isEqual
	IntegerSet(constructor with various arguments)
-------------------------------------------------------------------------------------------
*/
#ifndef INTEGERSET_H
#define INTEGERSET_H
#include <string>
using namespace std;

class IntegerSet
{
	private:
		int *intSet;

	public:
		IntegerSet(int);
		~IntegerSet();
};
#endif
