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
