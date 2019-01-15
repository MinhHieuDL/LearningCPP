#include "Class.h"
#include <iostream>

// Class student
double Student::athleticFee = 45.25;
void Student::setidNum(int id)
{
	const int MAX_NUM = 9999;
	if (id <= MAX_NUM)
		idNum = id;
	else
		idNum = MAX_NUM;
	return;
}

void Student::setName(string name)
{
	lastName = name;
	return;
}

void Student::setgradePointAverage(double point)
{
	const double MAX_GPA = 4.0;
	if (point <= MAX_GPA)
		gradePointAverage = point;
	else
		gradePointAverage = 0;
	return;
}

void Student::displayStudentData()
{
	cout << "Student ID: #" << idNum << endl << "last name is " << lastName << endl;
	cout << "The grade point average for this student is " << gradePointAverage << endl;
}

double Student::getAthleticFee()
{
	return athleticFee;
}

void Employee::setIdNum(const int id)
{
	idNum = id;
}

// Class Employee
void Employee::setHourlyRate(const double hour)
{
	hourlyRate = hour;
}

int Employee::getIdNum()
{
	return idNum;
}

double Employee::getHourlyRate()
{
	return hourlyRate;
}

Writer::Writer(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}

Writer::Writer(string first, string last)
{
	firstName = first;
	middleName = "";
	lastName = last;
}

string Writer::toString()
{
	string fullName;
	if (middleName != "")
		fullName = firstName + " " + middleName + " " + lastName;
	else
		fullName = firstName + " " + lastName;
	return fullName;
}
