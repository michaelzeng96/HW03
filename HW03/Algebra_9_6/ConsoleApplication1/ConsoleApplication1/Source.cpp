#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation
{
private:
	double a;
	double b;
	double c;

public:
	QuadraticEquation(double a, double b, double c);
	double get_a();
	double get_b();
	double get_c();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
};

QuadraticEquation::QuadraticEquation(double aa, double bb, double cc)
{
	a = aa;
	b = bb;
	c = cc;
}
double QuadraticEquation::get_a()
{
	return a;
}

double QuadraticEquation::get_b()
{
	return b;
}

double QuadraticEquation::get_c()
{
	return c;
}

double QuadraticEquation::getDiscriminant()
{
	return (pow(b, 2) - (4*a*c));
}

double QuadraticEquation::getRoot1()
{
	if (getDiscriminant() < 0)
		return 0;
	else
		return (-b + pow((pow(b, 2) - 4 * a*c), 0.5)) / (2 * a);
}

double QuadraticEquation::getRoot2()
{
	if (getDiscriminant() < 0)
		return 0;
	else 
		return(-b - pow((pow(b, 2) - 4 * a*c), 0.5)) / (2 * a);
}

int main()
{
	double a;
	double b;
	double c;

	cout << "User, enter in numbers for a, b, and c in the equation ax^2 + bx + x = 0" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	QuadraticEquation test(a, b, c);

	if (test.getDiscriminant() > 0)
	{
		cout << "Discriminant is positive, it is " << test.getDiscriminant() << endl;
		cout << "The roots are: ";
		cout << test.getRoot1() << " and " << test.getRoot2() << endl;
	}
	if (test.getDiscriminant() == 0)
	{
		cout << "Discriminant is 0. A root is " << test.getRoot1() << endl;
	}
	if (test.getDiscriminant()<0)
		cout << "The equation has no real roots." << endl;


	return 0;
}