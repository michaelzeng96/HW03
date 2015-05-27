#include <iostream>
using namespace std;

class EvenNumber
{
private:
	int iValue;

public:
	EvenNumber();
	EvenNumber(int number);
	int getValue();
	EvenNumber getNextEvenObject();
	EvenNumber getPreviousEventObject();
};

EvenNumber::EvenNumber()
{
	iValue = 0;
}

EvenNumber::EvenNumber(int number)
{
	iValue = number;
}

int EvenNumber::getValue()
{
	return iValue;
}

EvenNumber EvenNumber::getNextEvenObject()
{
	if (iValue % 2 == 0)
		return EvenNumber(iValue + 2);
	else
		return EvenNumber(iValue + 2);
}

EvenNumber EvenNumber::getPreviousEventObject()
{
	
		if (iValue % 2 == 0)
			return EvenNumber(iValue - 2);
		else
			return EvenNumber(iValue - 1);
}


int main()
{
	EvenNumber test(16);
	cout << "The current even number is " << test.getValue() << endl;
	cout << "The next even number for 16 is " << test.getNextEvenObject().getValue()
		<< endl;
	cout << "The previous even number for 16 is " << test.getPreviousEventObject().getValue()
		<< endl;

	return 0;
}