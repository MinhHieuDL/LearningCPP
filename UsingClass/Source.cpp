#include <iostream>
#include "Class.h"

using namespace std;


int main(void)
{
	/*Student aSophomore, aFreshman;
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
	
	Employee softwareEngineer(1144,1.25);
	cout << "Software Engineer ID is: " << softwareEngineer.getIdNum() << " Rate: " << softwareEngineer.getHourlyRate() << endl;
	
	cin.get();

	Writer oneWriter("Le", "Minh", "Hieu");
	Writer anotherWriter("Le", "Hieu");
	cout << oneWriter.toString() << endl;
	cout << anotherWriter.toString() << endl;
	
	cin.get();

	Transaction aSale(247, 782, 44.77, 512, "QA");
	aSale.display();

	cin.get();*/

	AutomobileInsurancePolicy A1;
	cin.get();

	Person *p;
	Employee e1;
	p = &e1;
	p->outputData();


	return 0;
}
