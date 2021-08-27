#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void displayData(int ,string & , double);

int main()
{
	ifstream inputFromFile;

	inputFromFile.open("accounts.txt", ios::in);  //open a pre-existing file "existingfile.txt" for reading

	if(!inputFromFile)
	{
		cerr << "failed to open the file" << endl;
		exit(EXIT_FAILURE);
	}

	int number;     //account number
	string name;    //account name
	double balance; //account balance

	cout << left << setw(18) << "account number" << setw(18) << "account name" << setw(18) << "account balance" << endl;

	while(inputFromFile >> number >> name >> balance)
	{
		displayData(number, name, balance);
	}

	inputFromFile.close();

	return 0;
}

void displayData(int number, string & name, double balance)
{
	cout << left << setw(18) << number << setw(18) << name << setw(18) << balance << endl;
}

/*
account number    account name      account balance
12345             Bob               123.45
23456             Robin             234.56
34567             Jake              345.67
 */
