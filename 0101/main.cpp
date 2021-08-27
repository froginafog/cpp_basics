#include <iostream>
#include <fstream>

using namespace std;

int getFileLength(string);
char * readFile(string, int);
void writeFile(string, char * buffer);

int main()
{
	string fileName;
	int fileLength;

	//get the length of the file
	do
	{
		cout << "enter the name of the input file: ";
		cin >> fileName;
		fileLength = getFileLength(fileName);
		cout << "length of file " << fileName << ": " << fileLength << endl;
	}while(fileLength < 0);

	char * bufferPointer;

	bufferPointer = readFile(fileName, fileLength);

	cout << "contents of the file " << fileName << ": " << endl;
	cout << bufferPointer << endl;

	cout << "enter the name of the output file: ";
	cin >> fileName;

	writeFile(fileName, bufferPointer);

	return 0;
}

int getFileLength(string fileName)
{
	ifstream inputFile;  //create an object "inputFile" to read from a file
	inputFile.open(fileName, ios::in);  //link the file "fileName" to the object inputFile

	if(!inputFile)
	{
		cout << "failed to open the file" << endl;
		return -1;
	}

	int offset;
	offset = 0;
	inputFile.seekg(offset, inputFile.end);  //go to the end of the file associated with "inputFile"

	int fileLength;
	fileLength = inputFile.tellg();  //get the length of the file

	inputFile.close();  //close the file associated with "inputFile"

	return fileLength;
}

char * readFile(string fileName, int fileLength)
{
	char * buffer = new char[fileLength];  //create an array to store the data read from the file

	ifstream inputFile;  //create an object "inputFile" to read from a file
	inputFile.open(fileName, ios::in);   //link the file "fileName" to the object "inputFile"

	inputFile.read(buffer, fileLength);   //read the file associated with inputFile and store what is read in "buffer"

	inputFile.close();

	return buffer;
}

void writeFile(string fileName, char * bufferPointer)
{
	ofstream outputFile;  //create an object "outputFile" to write to a file
	outputFile.open(fileName, ios::out);  //link the file "fileName" to the object "outputFile"

	int bufferSize = 0;
	int i;
	for(i = 0; bufferPointer[i] != '\0'; i++)
	{
	}
	bufferSize = i;

	outputFile.write(bufferPointer, bufferSize);

	outputFile.close();
}

/*
enter the name of the input file: accounts.txt
length of file accounts.txt: 127
contents of the file accounts.txt:
12345 Bob 123.45
23456 Robin 234.56
34567 Jake 345.67
45678 Maria -321.32
56789 Paul 0
13579 Brian -432.43
24681 Jess 0

enter the name of the output file: newfile.txt
 */
