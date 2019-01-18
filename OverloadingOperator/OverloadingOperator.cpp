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
int main()
{
	Employee clerk(1234, 400.00);
	Employee driver(3456, 650.00);
	double sum;
	sum = clerk.addTwo(driver);
	cout << "Adding driver to clerk - Sum is $" <<
		sum << endl;
	sum = driver.addTwo(clerk);
	cout << "Adding clerk to driver - Sum is $" <<
		sum << endl;
	cin.get();
	return 0;
}