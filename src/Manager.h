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
	float pay(float hoursWorked);
protected:
	int bonusmult;
};

#endif /* MANAGER_H_ */
