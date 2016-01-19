/*
 * Controller.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: akin8529
 */
#include "Controller.h"
#include <iostream>
using namespace std;

Controller :: Controller()
{
	this->classCount = 21;

}

void Controller :: setClassCount(int classCount)
{
	this->classCount = classCount;
}

int Controller :: getClassCount()
{
	return this->classCount;
}

void Controller :: start()
{
	cout << "Welcome to my second C++ app I care even less with this one" << endl;
	cout << "The current value of classCount is " << getClassCount() << endl;
	int newCount;
	cout << "Choose a new nuer for class" << endl;
	cin >> newCount
	this->setClassCount(newCount);
	cout << "The current value of classCount is " << getClassCount() << endl;
}
