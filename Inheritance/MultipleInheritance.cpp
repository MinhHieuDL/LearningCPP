#include <iostream>
#include "MultipleInheritance.h"

Vehicle::Vehicle(int id, string make, double mpg)
{
	idNumber = id;
	this->make = make;
	milesPerGallon = mpg;
}
void Vehicle::display()
{
	cout << "ID #" << idNumber << " Make: " << make << " gets " << milesPerGallon << " miles per gallon" << endl;
}

Dwelling::Dwelling(int bedrooms, int sqFeet)
{
	numberOfBedrooms = bedrooms;
	squareFeet = sqFeet;
}
void Dwelling::display()
{
	cout << numberOfBedrooms << " bedrooms and " <<	squareFeet << " square feet" << endl;
}

RV::RV(int id, string make, double mpg, int bedrooms,
	int sqFt) : Vehicle(id, make, mpg),
	Dwelling(bedrooms, sqFt)
{ }
void RV::display()
{
	cout << "A recreational vehicle: " << endl;
	Vehicle::display();
	Dwelling::display();
}