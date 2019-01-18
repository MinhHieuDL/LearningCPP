#include<iostream>
using namespace std;

class Employee
{
private:
	int idNum;
	double salary;
public:
	Employee(int, double);
	double addTwo(Employee);
	double operator + (Employee);			// the syntax to overloading a operation
	double operator + (double raise);
};

Employee::Employee(int id, double sal)
{
	idNum = id;
	salary = sal;
}

double Employee::addTwo(Employee emp)
{
	double total;
	total = salary + emp.salary;
	return total;
}

double Employee::operator+(Employee em)
{
	static int sum = 0;
	sum = salary + em.salary;
	return sum;
}

double Employee::operator+(double raise)
{
	(*this).salary += raise;
	return salary;
}

int main()
{
	Employee clerk(1234, 400.00);
	Employee driver(3456, 650.00);
	double sumInMain;
	double newSalary;
	sumInMain = clerk.operator+(driver);    
	cout << "Using operator+ function - Sum is $" << sumInMain << endl;
	sumInMain = clerk + driver;
	cout << "Adding clerk to driver - Sum is $" << sumInMain << endl;

	newSalary = driver + (clerk +driver);

	cout << "New salary of clerk is: " << newSalary << endl;
	cin.get();

	return 0;
}