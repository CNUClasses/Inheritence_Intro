/*
 * Manager.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: keith
 */

#include "Manager.h"

Manager::Manager(std::string name, float payrate, int bonusmult):Employee(name,payrate),bonusmult(bonusmult) {
	//what idf we dont call base class constructor in IL above?
	//Get a compiler error because compiler looks for no-arg constructor and does
	//not find one
}

Manager::~Manager() {
	// do we need this? No dynamic memory allocated, or files to close or anything else
}

float Manager::pay(float hoursWorked){
//	return hoursWorked*payrate*bonusmult;			//hmmm.   lets just use the base class pay see below
//	return pay(hoursWorked)*bonusmult;				//what happens if you forget to scope pay to the base class? Infinite recursion
	return Employee::pay(hoursWorked)*bonusmult;	//what happens if you forget to scope pay to the base class?
}

