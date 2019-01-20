#include "Class.h"
#include <iostream>


void InsurancePolicy::setPolicy(int num, string name, double rate)
{
	policyNumber = num;
	policyHolder = name;
	annualRate = rate;
}

void InsurancePolicy::showPolicy()
{
	cout << "Policy #" << policyNumber << " Name: " << policyHolder << " Annual premium : " << annualRate << endl;
}



// The other version of overriding
void Person::setFields(int num, string last, string first)
{
	idNum = num;
	lastName = last;
	firstName = first;
}
void Person::outputData()
{
	cout << "ID #" << idNum << " Name: " <<
		firstName << " " << lastName << endl;
}
int Person::getId()
{
	return idNum;
}


void Employee::setFields(int num, string last, string first,
	int dep, double sal)
{
	dept = dep;
	hourlyRate = sal;
}

void Employee::outputData()
{
	Person::outputData();
	cout << dept << " " << hourlyRate << endl;
}






