//inheritance
#include <iostream>

using namespace std;

class Base
{
private:
	int baseNumber;

public:
	Base();
	~Base();

	void setBaseNumber(int);
	int getBaseNumber();
};

class Derived : public Base  //"Derived" class now inherits from "Base" class
{
private:
	int derivedNumber;

public:
	Derived();
	~Derived();

	void setDerivedNumber(int);
	int getDerivedNumber();
};

Base::Base()  //constructor
{
	baseNumber = 0;
}

Base::~Base()  //destructor
{
}

void Base::setBaseNumber(int inputNumber)
{
	baseNumber = inputNumber;
}

int Base::getBaseNumber()
{
	return baseNumber;
}

Derived::Derived()  //constructor
{
	derivedNumber = 0;
}

Derived::~Derived()  //destructor
{
}

void Derived::setDerivedNumber(int inputNumber)
{
	derivedNumber = inputNumber;
}

int Derived::getDerivedNumber()
{
	return derivedNumber;
}

int main()
{
	Base base;
	Derived derived;

	base.setBaseNumber(5);
	derived.setDerivedNumber(10);

	cout << "base.getBaseNumber(): " << base.getBaseNumber() << endl;
	cout << "derived.getDerivedNumber(): " << derived.getDerivedNumber() << endl;

	//base.setDerivedNumber(15);
	//This line causes an error.
	//An object of the derived class is an object of the base class.
	//An object of the base class is NOT an object of the derived class.

	//A derived class object can access a base class public member.
	//A base class object CANNOT access a derived class member.

	derived.setBaseNumber(20);
	cout << "derived.getBaseNumber(): " << derived.getBaseNumber() << endl;

	return 0;
}

/*
base.getBaseNumber(): 5
derived.getDerivedNumber(): 10
derived.getBaseNumber(): 20
*/
