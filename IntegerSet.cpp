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
	intSet = new int[size]; // +1 ??
}
IntegerSet::~IntegerSet()
{
	delete[] intSet;
}