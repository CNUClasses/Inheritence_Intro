/*
 * Employee.h
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include<string>

class Employee {
public:
	Employee(std::string name, float payrate);
	std::string getName() const;

	float pay(float hoursWorked);
	virtual ~Employee(){};
protected:
	std::string name;
	float payrate;
};

#endif /* EMPLOYEE_H_ */
