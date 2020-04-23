/*
 * Manager.h
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include "Employee.h"

class Manager: public Employee {
public:
	Manager(std::string name, float payrate, int bonusmult);
	virtual ~Manager();

	//if function this overrides is virtual then
	//this function is also virtual
	//as a courtesy to future developers
	//add the word virtual here anyway
	virtual float pay(float hoursWorked);
protected:
	int bonusmult;
};

#endif /* MANAGER_H_ */
