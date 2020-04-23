//============================================================================
// Name        : Inheritence_intro.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Employee.h"
#include "Manager.h"
using namespace std;

////want 1 function to handle all instances in my employee-manager inheritance heiarchy.
////so I receive as a base class (Employee) pointer regardless of whether the object is
////an Employee or a Manager
void outputPay(Employee *pEmp, int hw){
	//lets see who gets paid what using pointers
	//this works correctly (Manager::pay(..) for Manager objects
	//Employee::pay(..) for Employee objects iff pay is virtual in
	//Employee header file
	//if pay function NOT virtual then for;
	//Employee objects get Employee::pay(..);
	//Manager objects also get Employee::pay(..)
	cout << "Employee "<<pEmp->getName()<<" has earned "<<pEmp->pay(hw)<<" dollars"<< endl;
}

int main() {
	float hw =11;

	Employee e("keith", 10.0);
	cout<<"Employee "<<e.getName()<< " has earned "<<e.pay(hw)<<" dollars"<<endl;

	Manager m("Allen", 10.0, 2);
	cout<<"Employee "<<m.getName()<< " has earned "<<m.pay(hw)<<" dollars"<<endl;

	outputPay(&e, hw);
	outputPay(&m, hw);
	return 0;
}
