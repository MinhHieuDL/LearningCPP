#include <string>

using namespace std;

class Student
{
	// declaration section:
private:
	int idNum;
	string lastName;
	double gradePointAverage;
public:
	static double athleticFee;
	void setidNum(int id);
	void setName(string name);
	void setgradePointAverage(double point);
	void displayStudentData();
	double getAthleticFee();
};

class Employee
{
private:
	int idNum;
	double hourlyRate;
public:
	class Employee() : idNum(9999), hourlyRate(6.15)
	{};

	class Employee(int id, double hour)
	{
		idNum = id;
		hourlyRate = hour;
	}

	void setIdNum(const int);
	void setHourlyRate(const double);
	int getIdNum();
	double getHourlyRate();
};

class Writer
{
private:
	string firstName;
	string middleName;
	string lastName;
	// other data members go here
public:
	Writer(string, string, string);
	Writer(string, string);
	string toString();
	// other functions go here
};

class InventoryItem
{
private:
	int stockNum;
	double price;
public:
	InventoryItem(int, double);
	void display();
};

class Salesperson
{
private:
	int idNum;
	string name;
public:
	Salesperson(int, string);
	void display();
};

class Transaction
{
private:
	int transNum;
	InventoryItem itemSold;
	Salesperson seller;
public:
	Transaction(int, int, double, int, string);
	void display();
};