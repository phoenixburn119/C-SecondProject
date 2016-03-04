/*
 * Controller.h
 *
 *  Created on: Jan 19, 2016
 *      Author: akin8529
 */

#ifndef SRC_CONTROLLER_CONTROLLER_H_
#define SRC_CONTROLLER_CONTROLLER_H_

using namespace std;

class Controller
{
private:
	int classCount;
public:
	Controller();
	void setClassCount(int classCount);
	int getClassCount();
	void start();
	string getClassName();
	void setClassName(string className);
};



#endif /* SRC_CONTROLLER_CONTROLLER_H_ */
