#include <iostream>
#include <stdlib.h>
using namespace std;

class MyInteger
{
private:
	int value;
public:
	MyInteger(int x);
	int getValue(void) const;
	bool isEven(void) const;
	bool isOdd(void) const;
	bool isPrime(void) const;
	static bool isEven(int x);
	static bool isOdd(int x);
	static bool isPrime(int x);
	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);
	bool equals(int x) const;
	bool equals(const MyInteger&) const;
	static int parseInt(const string&);
};

MyInteger::MyInteger(int x) :value(x){}

int MyInteger::getValue(void)const
{
	return value;
}

bool MyInteger::isEven(void)const
{
	if (value % 2 == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd(void)const
{
	return !isEven();
}

bool MyInteger::isPrime(void)const
{
	if (value < 1)
		return false;

	if (value == 2 || value == 3)
		return true;

	if (value == 1 || value % 2 == 0)
		return false;

	for (int i = 3; i < value; i = i + 2)
		{
			if (value%i == 0)
			{
				return false;
			}
		}
		return true;
}

bool MyInteger::isEven(int x)
{
	if (x % 2 == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd(int x)
{
	return !isEven(x);
}

bool MyInteger::isPrime(int x)
{
	if (x < 1)
		return false;

	if (x == 2 || x == 3)
		return true;

	if (x == 1 || x % 2 == 0)
		return false;

	for (int i = 3; i < x; i = i + 2)
	{
		if (x%i == 0)
		{
			return false;
		}
	}
	return true;
}

bool MyInteger::isEven(const MyInteger& object)
{
	if (object.value % 2 == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd(const MyInteger& object)
{
	return !isEven(object);
}

bool MyInteger::isPrime(const MyInteger& object)
{
	if (object.value < 1)
		return false;

	if (object.value == 2 || object.value == 3)
		return true;

	if (object.value == 1 || object.value % 2 == 0)
		return false;

	for (int i = 3; i < object.value; i = i + 2)
	{
		if (object.value%i == 0)
		{
			return false;
		}
	}
	return true;
}

bool MyInteger::equals(int x) const
{
	if (value == x)
		return true;
	else
		return false;
}

bool MyInteger::equals(const MyInteger& object) const
{
	if (value == object.value)
		return true;
	else
		return false;
}

int MyInteger::parseInt(const string& strObject)
{
	return atoi(strObject.data());
}



int main()
{
	MyInteger x(7);

	cout << "The value should be 7. Test: "<<x.getValue() << endl;
	cout << "Is the value even? 7 should not be. " << x.isEven() << endl;
	cout << "Is the value odd? 7 should be. " << x.isOdd() << endl;
	cout << "Is the value prime? 7 should be. " << x.isPrime() << endl;
	
	cout << "User input value: ";
	int b;
	cin >> b;
	
	cout << "Is your number even?" << MyInteger::isEven(b) << endl;
	cout << "Is your number odd?" << MyInteger::isOdd(b) << endl;
	cout << "Is your number prime?" << MyInteger::isPrime(b) << endl;

	MyInteger y(b);
	
	cout << "Is your number even?" << MyInteger::isEven(y) << endl;
	cout << "Is your number odd?" << MyInteger::isOdd(y) << endl;
	cout << "Is your number prime?" << MyInteger::isPrime(y) << endl;

	cout << "User input number for comparison to object x. object x value was 7." << endl;
	int input;
	cin >> input;
	cout << "Was your input equal to 7 (value of int value of x object)? " << x.equals(input) 
		<< endl;

	cout << "Enter another value for your own object under Class MyInteger" << endl;
	cin >> input;
	MyInteger z(input);
	cout << "Your value is being compared to x object's value, which is 7. Are they equal?"
		<< x.equals(z) << endl;

	string str( "52348" );

	cout << MyInteger::parseInt(str) << endl;


	return 0;
}