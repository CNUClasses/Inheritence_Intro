/*
 * Employee.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */

#include "Employee.h"

Employee::Employee(std::string name, float payrate):name(name), payrate(payrate) {

}

std::string Employee::getName()const {
	return this->name;
}

float Employee::pay(float hoursWorked){
	return hoursWorked*payrate;
}

