#include<iostream>
#include<string>

using namespace std;

// Basic Template Function
template<class T>
T findLargest(T x, T y)
{
	T big;
	if (x > y)
		big = x;
	else
		big = y;
	return big;
}

class PhoneCall
{
	friend ostream& operator<<(ostream&, PhoneCall);
private:
	int minutes;
public:
	PhoneCall(int = 0);
	bool operator>(PhoneCall);
	bool operator>(int);
	bool operator==(PhoneCall);
	bool operator==(int);
};

PhoneCall::PhoneCall(int min)
{
	minutes = min;
}
bool PhoneCall::operator>(PhoneCall call)
{
	bool isTrue = false;
	if (minutes > call.minutes)
		isTrue = true;
	return isTrue;
}
bool PhoneCall::operator>(int min)
{
	bool isTrue = false;
	if (minutes > min)
		isTrue = true;
	return isTrue;
}
bool PhoneCall::operator==(PhoneCall call)
{
	bool isTrue = false;
	if (minutes == call.minutes)
		isTrue = true;
	return isTrue;
}
bool PhoneCall::operator==(int min)
{
	bool isTrue = false;
	if (minutes == min)
		isTrue = true;
	return isTrue;
}

ostream& operator<<(ostream& out, PhoneCall call)
{
	out << "Phone call that lasted " << call.minutes << " minutes" << endl;
	return out;
}

// Overloading Template Function
template<class T>
void invert(T& x, T& y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template<class T>	// Have to repeat this  template definition 
void invert(T &x)
{
	x = -x;
}

// Using more than one type in a function template:
template <class T>
void repeatValue(T val, int times)
{
	int x;
	for (x = 0; x < times; ++x)
		cout << "#" << (x + 1) << " " << val << endl;
}

// Using more than one parameterized type in a function template:
template <class T, class U>
void displayAndCompare(T val1, U val2)
{
	cout << "First is " << val1 << " Second is " << val2 << "  ";
	if (val1 > val2)
		cout << " First is larger" << endl;
	else
		if (val1 == val2)
			cout << " First and second are equal" << endl;
		else
			cout << " Second is larger" << endl;
}

// creating a complete class template
template<class T>
class Number
{
private:
	T theNumber;
public:
	Number(T n);
	void displayNumber();
};
template<class T>
Number<T>::Number(T n)
{
	theNumber = n;
}
template<class T>
void Number<T>::displayNumber()
{
	cout << "Number # ";
	cout << theNumber << endl;
}


int main()
{
	int a = 68, b = 20;
	double c = 68.5;
	char d = 'D';
	PhoneCall oneCall(3), anotherCall(5);
	displayAndCompare(a, b);
	displayAndCompare(a, 68);
	displayAndCompare(a, c);
	displayAndCompare(a, d);
	displayAndCompare(c, d);
	displayAndCompare(oneCall, a);
	displayAndCompare(oneCall, 3);
	displayAndCompare(oneCall, anotherCall);
	cin.get();
	return 0;
}
