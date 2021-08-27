#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void displayData(int ,string & , double);

int main()
{
	int number;     //account number
	string name;    //account name
	double balance; //account balance

	int n;  //nth byte
	int position;  //current position of the pointer in the file (in terms of bytes)

	ifstream readFile;

	//We open and close the file and see the outcome for each n.
	for(n = 0; n <= 20; n++)
	{
		readFile.open("accounts.txt", ios::in);  //open a pre-existing file "accounts.txt" for reading

		if(!readFile)
		{
			cerr << "failed to open the file" << endl;
			exit(EXIT_FAILURE);
		}

		cout << "n: " << n << endl;

		readFile.seekg(n, ios::beg);
		//set the file-position pointer to the nth byte
		//readFile.seekg(n);
		//does the same trick because ios::beg is the default setting
		//In this case, n can be seen as the offset from the beginning of the file.

		position = readFile.tellg();
		cout << "position: " << position << endl;

		cout << left << setw(18) << "account number" << setw(18) << "account name" << setw(18) << "account balance" << endl;

		while(readFile >> number >> name >> balance)
		{
			displayData(number, name, balance);
		}

		readFile.close();

		cout << "---------------------------------------------------------" << endl;
	}

	return 0;
}

void displayData(int number, string & name, double balance)
{
	cout << left << setw(18) << number << setw(18) << name << setw(18) << balance << endl;
}

/*
n: 0
position: 0
account number    account name      account balance
12345             Bob               123.45
23456             Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 1
position: 1
account number    account name      account balance
2345              Bob               123.45
23456             Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 2
position: 2
account number    account name      account balance
345               Bob               123.45
23456             Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 3
position: 3
account number    account name      account balance
45                Bob               123.45
23456             Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 4
position: 4
account number    account name      account balance
5                 Bob               123.45
23456             Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 5
position: 5
account number    account name      account balance
---------------------------------------------------------
n: 6
position: 6
account number    account name      account balance
---------------------------------------------------------
n: 7
position: 7
account number    account name      account balance
---------------------------------------------------------
n: 8
position: 8
account number    account name      account balance
---------------------------------------------------------
n: 9
position: 9
account number    account name      account balance
123               .45               23456
---------------------------------------------------------
n: 10
position: 10
account number    account name      account balance
123               .45               23456
---------------------------------------------------------
n: 11
position: 11
account number    account name      account balance
23                .45               23456
---------------------------------------------------------
n: 12
position: 12
account number    account name      account balance
3                 .45               23456
---------------------------------------------------------
n: 13
position: 13
account number    account name      account balance
---------------------------------------------------------
n: 14
position: 14
account number    account name      account balance
---------------------------------------------------------
n: 15
position: 15
account number    account name      account balance
---------------------------------------------------------
n: 16
position: 16
account number    account name      account balance
23456             Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 17
position: 17
account number    account name      account balance
23456             Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 18
position: 18
account number    account name      account balance
23456             Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 19
position: 19
account number    account name      account balance
3456              Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
n: 20
position: 20
account number    account name      account balance
456               Robin             234.56
34567             Jake              345.67
---------------------------------------------------------
 */
