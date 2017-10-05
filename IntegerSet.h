#pragma once
#define INTEGERSET_H

class IntegerSet
{
private:
	int *intSet;
	int setSize;

public:
	IntegerSet(int);
	IntegerSet(int *, int);
	~IntegerSet();
	IntegerSet* unionOfSets(IntegerSet *) const;
	IntegerSet* intersectionOfSets(IntegerSet *) const;
	bool insertElement(int);
	bool deleteElement(int);
	void printSet();
	bool isEqual(IntegerSet *) const;

};
