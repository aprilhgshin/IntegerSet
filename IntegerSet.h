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
		argument will be an integerSet then it will return a new integer set
		makes a third integerset that has one or both)
	intersectionOfSets(either 2 intset or one)
		-makes a set that has both
	insertElement(int k into the set by setting a[k] to 1
	deleteElement(deletes m in the set by a[m] to 0)
	PrintSet(print ---- for empty set, 
	isEqual
	IntegerSet(constructor with various arguments)
		this time pass an array and the size

	each array has the indexes value in it
	default constructor takes one arguement(the size) then allocates memory then initialize array with all zeroes
	destructor to destroy the allocated memory



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
		int setSize;

	public:
		IntegerSet(int);
		IntegerSet(int*, int);
		~IntegerSet();
		IntegerSet* unionOfSets(IntegerSet*,IntegerSet*);
		IntegerSet* intersectionOfSets(IntegerSet*,IntegerSet*);
		bool insertElement(int);
		void printSet() const;
		bool deleteElement(int);
		bool isEqual(IntegerSet*);
};
#endif
