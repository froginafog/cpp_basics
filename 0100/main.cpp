//copy a file
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile;  //create a stream called "inputFile"
	inputFile.open("accounts.txt", ios::in);  //open the file "accounts.txt" and link it to "inputFile"

	int offset;
	offset = 0;
	inputFile.seekg(offset, inputFile.end);  //go to the end of the file associated with "inputFile"

	int lengthOfFile;
	lengthOfFile = inputFile.tellg();  //get the length of the file

	inputFile.seekg(offset, inputFile.beg);  //go to the beginning of the file associated with "inputFile"

	char * buffer = new char [lengthOfFile];  //create an array to store the data read from the file

	inputFile.read(buffer, lengthOfFile);  //read the file associated with inputFile and store what is read in "buffer"

	ofstream outputFile;  //create a stream "outputFile"
	outputFile.open("outputs.txt", ios::out);  //open (or create) the file "outputs.txt" and link it to "outputFile"

	outputFile.write(buffer, lengthOfFile);  //wite the data in "buffer" to the file associated with "outputFile"

	return 0;
}
