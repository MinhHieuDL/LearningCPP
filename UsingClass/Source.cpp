#include <iostream>
#include "Class.h"

using namespace std;

class Test {
private:
	int i;
public:
	Test(int);
	Test();
	~Test();
	void display();
};

Test::Test(int ii)
{
	i = ii; 
}

Test::Test()
{
	cout << "I have existed in this world niggaaaaaaaaaaa! " << endl;
}

Test::~Test()
{
	i = 0; 
	cout << "deconstructor called...value of i= " << i << endl;
}

void Test::display()
{
	cout << "value of i= " << i << endl; 
}

int main(void)
{
	Test *a;
	a = new Test[3];
	return 0;
}
