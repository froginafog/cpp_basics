#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n;
	int numberOfIntegers;

	cout << "Enter how many integers you wish to input: ";
	cin >> numberOfIntegers;

	ofstream outputToFile("output.txt", ios::out);  //output data to the file "output.txt"

	if(!outputToFile)
	{
		cerr << "Failure to open the file." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Enter a set of integers (e.g. 1 2 3 4 5): ";
	for(int i = 0; i < numberOfIntegers; i++)
	{
		cin >> n;
		outputToFile << n << ' ';
	}
	outputToFile << endl;

	outputToFile << "--------------------------" << endl;
	outputToFile << "integers appended" << endl;

	cout << "Enter how many integers you wish to input again: ";
	cin >> numberOfIntegers;

	ofstream appendToFile("output.txt", ios::app);  //append the newly entered data to the end of the file "output.txt"

	if(!appendToFile)
	{
		cerr << "Failure to open the file." << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Enter another set of integers (e.g. 6 7 8 9 10): ";
	for(int i = 0; i < numberOfIntegers; i++)
	{
		cin >> n;
		appendToFile << n << ' ';
	}
	appendToFile << endl;

	return 0;
}

/*
Enter how many integers you wish to input: 5
Enter a set of integers: 1 2 3 4 5
Enter how many integers you wish to input: 5
Enter another set of integers: 6 7 8 9 10
 */
