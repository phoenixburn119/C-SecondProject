/*
 * Runner.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: akin8529
 */

#include "Controller.h"

int main()
{
	Controller * baseController = new Controller();
	baseController->start();
	//Do the same thing in a different way
	(*baseController).start();
	return 0;
}


