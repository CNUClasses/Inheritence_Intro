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

int main() {
	float hw =11;

	Employee e("keith", 10.0);
	cout<<"Employee "<<e.getName()<< " has earned "<<e.pay(hw)<<" dollars"<<endl;


	Manager m("Allen", 10.0, 2);
	cout<<"Employee "<<m.getName()<< " has earned "<<m.pay(hw)<<" dollars"<<endl;

	return 0;
}
