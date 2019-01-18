#include <string>

using namespace std;

class Vehicle
{
protected:
	int idNumber;
	string make;
	double milesPerGallon;
public:
	Vehicle(int, string, double);
	void display();
};

class Dwelling
{
protected:
	int numberOfBedrooms;
	int squareFeet;
public:
	Dwelling(int, int);
	void display();
};

class RV : public Vehicle, public Dwelling
{
public:
	RV(int, string, double, int, int);
	void display();
};
