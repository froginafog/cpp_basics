#include <iostream>
#include <fstream>  //to use ofstream

using namespace std;

int main()
{
	int number;  //account number
	string name; //account name
	double balance; //account balance
	int numberOfAccounts;

	ofstream outputToFile("account.txt", ios::out);  //ofstream constructor
	                                               //opens or creates a file "accounts.txt"

	if(!outputToFile)  //if we failed to create the file
	{
		cerr << "failed to open the file" << endl;
		exit(EXIT_FAILURE);
	}

    cout << "Enter account number, account name, and account balance, each separated by a space: ";
    cin >> number >> name >> balance;
    outputToFile << "account number : " << number << endl
                 << "account name   : " << name << endl
                 << "account balance: " << balance << endl
                 << "--------------------------------------" << endl;

	return 0;
}


