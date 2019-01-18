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
	double operator + (Employee);
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
	double sum = 0;
	sum = salary + em.salary;
	return sum;
}

int main()
{
	Employee clerk(1234, 400.00);
	Employee driver(3456, 650.00);
	double sum;
	sum = clerk.operator+(driver);
	cout << "Adding driver to clerk - Sum is $" << sum << endl;
	sum = driver.operator+(clerk);
	cout << "Adding clerk to driver - Sum is $" << sum << endl;

	cin.get();

	return 0;
}