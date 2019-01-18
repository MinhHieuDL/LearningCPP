#include "Inheritance_ConstructorBaseClass.h"
#include "MultipleInheritance.h"
#include <iostream>

int main(void)
{
	RV aRecreationalVehicle(2345, "Winnebago", 12, 2, 110);
	aRecreationalVehicle.display();
	cin.get();
	return 0;
}