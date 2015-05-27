#include <iostream>
using namespace std;

class Fan
{
private:
	int speed;
	bool on;
	double radius;

public:
	Fan();
	int getSpeed();
	void setSpeed(int speed);
	bool get_on();
	void set_on(bool set);
	double getRadius();
	void setRadius(double radius);

};

Fan::Fan()
{
	speed = 1;
	radius = 5;
	on = false;
}


int Fan::getSpeed()
{
	return speed;
}

void Fan::setSpeed(int x)
{
	speed = x;
}

bool Fan::get_on()
{
	return on;
}

void Fan::set_on(bool set)
{
	on = set;
}

double Fan::getRadius()
{
	return radius;
}

void Fan::setRadius(double setradius)
{
	radius = setradius;
}

int main()
{
	Fan fan_object_one;
	Fan fan_object_two;

	fan_object_one.setSpeed(3);
	fan_object_one.setRadius(10);
	fan_object_one.set_on(true);

	fan_object_two.setSpeed(2);
	fan_object_two.setRadius(5);
	fan_object_two.set_on(false);

	cout << "The first fan object's speed is " << fan_object_one.getSpeed() << "." << endl;
	cout << "The first fan object's radius is " << fan_object_one.getRadius() << "." << endl;
	cout << "The first fan object's on value is " << fan_object_one.get_on() << "." << endl;

	cout << "The second fan object's speed is " << fan_object_two.getSpeed() << "." << endl;
	cout << "The second fan object's radius is " << fan_object_two.getRadius() << "." << endl;
	cout << "The second fan object's on value is " << fan_object_two.get_on() << "." << endl;

	return 0;
}