#include <iostream>
#include "Class.h"

using namespace std;

int main(void)
{
	Student aSophomore, aFreshman;
	aSophomore.setidNum(1234);
	aFreshman.setidNum(2345);
	cout << "Athletic fee of aFreshman: " << aFreshman.getAthleticFee() << endl;
	cout << "Athletic fee of aSophomore: " << aSophomore.getAthleticFee() << endl;
	cout << "The athletic fee for all students is " << Student::athleticFee << endl;

	cin.get();

	Employee assistant;
	cout << "Before setting values" << endl;
	cout << " ID: " << assistant.getIdNum() <<" Rate: " << assistant.getHourlyRate() << endl;
	assistant.setIdNum(4321);
	assistant.setHourlyRate(12.75);
	cout << "After setting values" << endl; 
	cout << " ID: " << assistant.getIdNum() <<" Rate: " << assistant.getHourlyRate() << endl;
	
	cin.get();
	return 0;
}
