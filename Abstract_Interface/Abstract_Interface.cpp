// virtpure.cpp
// pure virtual function
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Base //base class
{
public:
	virtual ~Base();
	virtual void show() = 0; //pure virtual function

};
Base::~Base()
{
	cout << "Base destroyed" << endl;
}

////////////////////////////////////////////////////////////////
class Derv1 : public Base //derived class 1
{
public:
	~Derv1();
	void show()
	{
		cout << "Derv1" << endl;
	}
};
Derv1::~Derv1()
{
	cout << "Derv1 destroyed" << endl;
}
////////////////////////////////////////////////////////////////
class Derv2 : public Base //derived class 2
{
public:
	void show()
	{
		cout << "Derv2" << endl;
	}
};
////////////////////////////////////////////////////////////////
int main()
{
	Base *base;
	base = new Derv1;
	delete base;
	cin.get();
	return 0;
}