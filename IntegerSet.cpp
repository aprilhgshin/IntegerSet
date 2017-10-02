/*
April Shin
Jonah Moon
CS 137
Homework 2
*/

#include "IntegerSet.h"
#include <iostream>
using namespace std;

IntegerSet::IntegerSet(int size)
{
	intSet = new int[size];
	setSize = size;
	for (int counter = 0; counter < size; ++counter)
	{
		intSet[counter] = 0;
	}
}

IntegerSet::IntegerSet(const int *array, const int arraySize)
{
	for (int counter = 0; counter < arraySize; ++counter)
	{
		intSet[counter] = array[counter];
	}
}

IntegerSet IntegerSet::unionOfSets(IntegerSet *anotherSet) const
{
	for (int counter = 0; counter < setSize; ++counter)
	{
		if (intSet[counter] == 1 || anotherSet->intSet[counter] == 1)
		{
			intSet[counter] = 1;
		}
		else
		{
		}
	}
	return *intSet;
}

// In the following function, I changed the values in the intSet array rather than creating a whole new array in order to see all of the changes when I use printSet().
IntegerSet IntegerSet::intersectionOfSets(IntegerSet *anotherSet) const
{
	for (int counter = 0; counter < setSize; ++counter)
	{
		if (intSet[counter] == 1 && anotherSet->intSet[counter] == 1)
			intSet[counter] = 1;

		else 
			intSet[counter] = 0;
	}
	return *intSet;
}

bool IntegerSet::insertElement(int k)
{
	if (k >= 0 && k <= setSize)
	{
		intSet[k] = 1;
		return true;
	}
	else
	{
		return false;
	}
}

bool IntegerSet::deleteElement(int m)
{
	if (m >= 0 && m <= setSize)
	{
		intSet[m] = 0;
		return true;
	}
	else
		return false;
}

void IntegerSet::printSet()
{
	for (int counter = 0; counter < setSize; ++counter)
	{
		if (intSet[counter] == 1)
			cout << counter << " ";
		else
			cout << "--";
	}
	cout << endl;
}

bool IntegerSet::isEqual(IntegerSet *anotherSet) const
{
	for (int counter = 0; counter < setSize; ++counter)
	{
		if (intSet[counter] == anotherSet->intSet[counter])
			return true;
		else
			return false;
	}
}

IntegerSet::~IntegerSet()
{
	delete[] intSet;
}