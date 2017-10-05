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
	firstRound.insertElement(1);
	firstRound.insertElement(2);
	firstRound.insertElement(3);
	firstRound.deleteElement(2);
	firstRound.printSet();  //Printing which position of the array contains the number 1
	cout << endl;

	IntegerSet secondRound(6);
	secondRound.insertElement(7);
	secondRound.insertElement(2);
	secondRound.insertElement(3);
	secondRound.deleteElement(3);
	secondRound.printSet();  //Printing which position of the array contains the number 1
	cout << endl;

	IntegerSet sampleSet(5);  //defaulted to all 0's
	IntegerSet thirdRound(5);
	thirdRound.unionOfSets(&sampleSet);
	thirdRound.intersectionOfSets(&sampleSet);

	report = secondRound.isEqual(&firstRound);
	cout << "EQUALITY STATUS:" << endl
		<< "1 for true" << endl
		<< "0 for false" << endl
		<< report << endl;
	cout << endl;

	system("PAUSE");
	return 0;
}