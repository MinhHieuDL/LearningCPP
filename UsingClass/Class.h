#include <string>

using namespace std;

//class Student
//{
//	// declaration section:
//private:
//	int idNum;
//	string lastName;
//	double gradePointAverage;
//public:
//	static double athleticFee;
//	void setidNum(int id);
//	void setName(string name);
//	void setgradePointAverage(double point);
//	void displayStudentData();
//	double getAthleticFee();
//};
//
//class Employee
//{
//private:
//	int idNum;
//	double hourlyRate;
//public:
//	class Employee() : idNum(9999), hourlyRate(6.15)
//	{};
//
//	class Employee(int id, double hour)
//	{
//		idNum = id;
//		hourlyRate = hour;
//	}
//
//	void setIdNum(const int);
//	void setHourlyRate(const double);
//	int getIdNum();
//	double getHourlyRate();
//};
//
//class Writer
//{
//private:
//	string firstName;
//	string middleName;
//	string lastName;
//	// other data members go here
//public:
//	Writer(string, string, string);
//	Writer(string, string);
//	string toString();
//	// other functions go here
//};
//
//class InventoryItem
//{
//private:
//	int stockNum;
//	double price;
//public:
//	InventoryItem(int, double);
//	void display();
//};
//
//class Salesperson
//{
//private:
//	int idNum;
//	string name;
//public:
//	Salesperson(int, string);
//	void display();
//};
//
//class Transaction
//{
//private:
//	int transNum;
//	InventoryItem itemSold;
//	Salesperson seller;
//public:
//	Transaction(int, int, double, int, string);
//	void display();
//};
//
//class Iled
//{
//public:
//	virtual void TurnOn() = 0;
//	virtual void TurnOff() = 0;
//};

// Overriding

class InsurancePolicy
{
private:
	int policyNumber;
protected:
	string policyHolder;
public:
	double annualRate;
	void setPolicy(int, string, double);
	void showPolicy();
};


class AutomobileInsurancePolicy : protected InsurancePolicy
{
public:
	AutomobileInsurancePolicy()
	{
		setPolicy(12345, "Hieu", 1.25);
	//	showPolicy();
	}
};

// Person
class Person
{
private:
	int idNum;
	string lastName;
	string firstName;
public:
	void setFields(int, string, string);
	void outputData();
	int getId();
};


class Employee : public Person
{
private:
	int dept;
	double hourlyRate;
public:
	void setFields(int, string, string, int, double);
	void outputData();
};