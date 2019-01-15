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
	void setIdNum(const int);
	void setHourlyRate(const double);
	int getIdNum();
	double getHourlyRate();
};