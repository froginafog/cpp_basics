#include <iostream>

using namespace std;

//create a class called "Account"
class Account
{
public:
    string name;
	int ID;
private:
    double account_balance;
};

int main()
{
    Account account_1;  //create an object called "account_1" of the class called "Account"
    account_1.name = "Bob The Great";
    account_1.ID = 12345;
    //account_1.account_balance = 123.45;
    //We cannot access "account_balance" because "account_balance" is a private member of the class Account.

    Account account_2;  //create an object called "account_2" of the class called "Account"
    account_2.name = "Robin The Hood";
    account_2.ID = 23456;
    //account_2.account_balance = 234.56;
    //We cannot access "account_balance" because "account_balance" is a private member of the class Account.

    cout << "account_1.name: " << account_1.name << endl;
    cout << "account_1.ID: " << account_1.ID << endl;
    cout << "----------------------------------" << endl;
    cout << "account_2.name: " << account_2.name << endl;
    cout << "account_2.ID: " << account_2.ID << endl;

	return 0;
}

/*
account_1.name: Bob The Great
account_1.ID: 12345
----------------------------------
account_2.name: Robin The Hood
account_2.ID: 23456
 */
