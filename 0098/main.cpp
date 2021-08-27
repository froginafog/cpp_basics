#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFromFile;  //create a stream called "inputFromFile"
	inputFromFile.open("accounts.txt", ios::in);  //open the file "accounts.txt" and link it to the stream "inputFromFile"

	int offset;
	offset = 0;
	inputFromFile.seekg(offset, inputFromFile.end);  //go to the end of the file associated with "inputFromFile"

	int lengthOfFile;
	lengthOfFile = inputFromFile.tellg();  //get the length of the file

	char * buffer = new char [lengthOfFile];  //create an array to store the data read from the file

	inputFromFile.seekg(offset, inputFromFile.beg);  //go to the beginning of the file associated with "inputFromFile"

	inputFromFile.read(buffer, lengthOfFile);  //read the file associated with "inputFromFile" and store what is read in "buffer"
	                                           //"lengthOfFile" is the number of characters read

	cout << "buffer: " << endl;
	cout << buffer << endl;

	return 0;
}

/*
buffer:
12345 Bob 123.45
23456 Robin 234.56
34567 Jake 345.67
45678 Maria -321.32
56789 Paul 0
13579 Brian -432.43
24681 Jess 0
 */
