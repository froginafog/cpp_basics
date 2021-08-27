#include <iostream>

using namespace std;

class Account
{
private:
	string name;
	int ID;

public:
	void setName(string inputName);
	string getName();
	void setID(int inputID);
	int getID();
};

void Account::setName(string inputName)
{
    name = inputName;
}

string Account::getName()
{
    return name;
}

void Account::setID(int inputID)
{
    ID = inputID;
}

int Account::getID()
{
    return ID;
}

int main()
{
	//create an object of the class "Account"
	//"account_1" is the name of the object
	Account account_1;

	//create an object of the class "Account"
	//"account_2" is the name of the object
	Account account_2;

	account_1.setName("Bob The Great");
	account_1.setID(123);

	account_2.setName("Robin The Hood");
	account_2.setID(456);

	cout << "account_1.getName(): " << account_1.getName() << endl;
	cout << "account_1.getID()  : " << account_1.getID() << endl;
    	cout << "----------------------------------------" << endl;
	cout << "account_2.getName(): " << account_2.getName() << endl;
	cout << "account_2.getID()  : " << account_2.getID() << endl;

	return 0;
}

/*
account_1.getName(): Bob The Great
account_1.getID()  : 123
----------------------------------------
account_2.getName(): Robin The Hood
account_2.getID()  : 456
*/
