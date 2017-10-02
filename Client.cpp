//April Shin
//Partnering with Jonah Moon
//CSIS 137 Wed Night Class
//Homework #2

#include "IntegerSet.h"
#include <iostream>
using namespace std;

int main()
{
	bool report;

	IntegerSet firstRound(4);
	IntegerSet sampleSet(4);
	firstRound.insertElement(3);
	firstRound.deleteElement(2);
	firstRound.intersectionOfSets(&sampleSet);
	firstRound.printSet();  //Printing which position of the array contains the number 1

	IntegerSet secondRound(6);
	secondRound.insertElement(7);
	secondRound.insertElement(2);
	secondRound.insertElement(3);
	secondRound.deleteElement(3);
	secondRound.unionOfSets(&firstRound);
	secondRound.printSet();  //Printing which position of the array contains the number 1

	report = secondRound.isEqual(&firstRound);
	cout << "Equal status: " << report << endl;

	system("PAUSE");
	return 0;
}