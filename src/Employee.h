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

	//make the following call virtual to get correct behaviour when
	//manipulating derived classes from base class pointer
	virtual float pay(float hoursWorked);

	//destructors should always be virtual
	virtual ~Employee(){};
protected:
	std::string name;
	float payrate;
};

#endif /* EMPLOYEE_H_ */
