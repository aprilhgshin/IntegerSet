//April Shin
//Jonah Moon
//CSIS 137 Wed Night Class
//Homework #2

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

IntegerSet::IntegerSet(int *array, int arraySize)
{
	for (int counter = 0; counter < arraySize; ++counter)
	{
		intSet[counter] = array[counter];
	}
}

IntegerSet* IntegerSet::unionOfSets(IntegerSet *anotherSet) const
{
	IntegerSet *combinedUSet;							  /* a pointer to an IntegerSet, which I will 
														     then use the pointer to dynamically allocate 
															 an object of the IntegerSet class */
	combinedUSet = new IntegerSet(anotherSet->setSize);	  // size for each instance can be different

	for (int counter = 0; counter < setSize; ++counter)
	{
		if (intSet[counter] == 1 || anotherSet->intSet[counter] == 1)
		{
			combinedUSet->intSet[counter] = 1;
		}
		else
		{
			combinedUSet->intSet[counter] = 0;
		}
	}
	// combinedUSet->printSet();      For testing
	return combinedUSet;
	delete[] combinedUSet;
}

IntegerSet* IntegerSet::intersectionOfSets(IntegerSet *anotherSet) const
{
	IntegerSet *combinedISet;							  
	combinedISet = new IntegerSet(anotherSet->setSize);	  

	for (int counter = 0; counter < setSize; ++counter)
	{
		if (intSet[counter] == 1 && anotherSet->intSet[counter] == 1)
			combinedISet[counter] = 1;

		else 
			intSet[counter] = 0;
	}
	//combinedISet->printSet();		For testing
	return combinedISet;
	delete[] combinedISet;
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
			cout << " " << counter;
		else
			cout << " --";
	}
	cout << endl;
}

bool IntegerSet::isEqual(IntegerSet *anotherSet) const
{
	int totalOnes = 0;
	for (int counter = 0; counter < setSize; ++counter)
	{
		if (intSet[counter] == anotherSet->intSet[counter])
		{
			++totalOnes;
		}
		else 
		{
		}
	}
	if (totalOnes == setSize)
	{
		return true;
	}
	else
	{
		return false;
	}
}

IntegerSet::~IntegerSet()
{
	delete[] intSet;
}

