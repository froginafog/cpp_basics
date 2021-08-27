#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

char * readFile(ifstream &);

int main()
{
	ifstream fileObject;

	//We open and close the file and see the outcome for each n.

	fileObject.open("accounts.txt", ios::in);  //open a pre-existing file "existingfile.txt" for reading

	if(!fileObject)
	{
		cerr << "failed to open the file" << endl;
		exit(EXIT_FAILURE);
	}

	char * bufferPointer;

	bufferPointer = readFile(fileObject);

	cout << bufferPointer;

	fileObject.close();

	return 0;
}

//This function takes an input file stream object and writes the data to an array.
//Then, the pointer of the array is returned.
char * readFile(ifstream & file)
{
	//"&" is necessary
	//"file" is just a name for the ifstream object

	int n;  //nth byte
	int lengthOfFile;

	n = 0;

	file.seekg(n, ios::end);  //set the file-position pointer to the nth byte relative to the end of the file
	//In this case, n can be seen as the offset from the end of the file.
	//In this case, n = 0 with ios::end means go to the end of the file.

	lengthOfFile = file.tellg();  //get the length of the file

	char * buffer = new char [lengthOfFile];  //create an array of char that can store "lengthOfFile" bytes of characters

	file.seekg(n, ios::beg);  //set the file-position pointer to the nth byte relative to the beginning of the file

	file.read(buffer, lengthOfFile);  //assign the data read from the file to "buffer"

	return buffer;
}

/*
12345 Bob 123.45
23456 Robin 234.56
34567 Jake 345.67
 */
