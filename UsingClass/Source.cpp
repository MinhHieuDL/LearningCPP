#include <iostream>
#include "Class.h"

using namespace std;

int main(void)
{
	Student aSophomore, aFreshman;
	aSophomore.setidNum(1234);
	aFreshman.setidNum(2345);
	cout << " Athletic fee of aFreshman: " << aFreshman.getAthleticFee() << endl;
	cout << " Athletic fee of aSophomore: " << aSophomore.getAthleticFee() << endl;
	cin.get();
	return 0;
}
