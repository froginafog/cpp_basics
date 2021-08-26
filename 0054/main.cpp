#include <iostream>

using namespace std;

int main()
{
	int n;
	double x;
	string s;

	n = 123;
	x = 123.45;
	s = "ABC 456 DEF";

	int * integerPointer;     //create a pointer of the type "int" with the name "integerPointer"
	double * doublePointer;   //create a pointer of the type "double" with the name "doublePointer"
	string * stringPointer;   //create a pointer of the type "string" with the name "stringPointer"

	integerPointer = &n;
	//assign the address of "n" to "integerPointer"
	//now "integerPointer" points to "c"

	doublePointer = &x;
	//assign the address of "x" to "doublePointer"
	//now "doublePointer" points to "x"

	stringPointer = &s;
	//assign the address of "s" to "stringPointer"
	//now "stringPointer" points to "s"

	cout << "n: " << n << endl;  //output the value stored in "n"
	cout << "x: " << x << endl;  //output the value stored in "x"
	cout << "s: " << s << endl;  //output the value stored in "s"

	cout << "--------------------------------------------" << endl;

	cout << "&n: " << &n << endl;  //output the address of "n"
	cout << "&x: " << &x << endl;  //output the address of "x"
	cout << "&s: " << &s << endl;  //output the address of "s"

	cout << "--------------------------------------------" << endl;

	cout << "integerPointer  : " << integerPointer << endl;
	//output the address that "integerPointer" points to

	cout << "doublePointer   : " << doublePointer << endl;
	//output the address that "doublePointer" points to

	cout << "stringPointer   : " << stringPointer << endl;
	//output the address that "stringPointer" points to

	cout << "--------------------------------------------" << endl;

	cout << "*integerPointer  : " << *integerPointer << endl;
	//output the value stored in the location that "integerPointer" points to

	cout << "*doublePointer   : " << *doublePointer << endl;
	//output the value stored in the location that "doublePointer" points to

	cout << "*stringPointer   : " << *stringPointer << endl;
	//output the value stored in the location that "stringPointer" points to

	cout << "--------------------------------------------" << endl;

	char * first;    //create a pointer of the type "char"
	char * current;  //create another pointer of the type "char"
	int i;

	first = &s[0];
	//assign the address of the first element in "s" to "first"
	//now "first" points to the first element of "s"

	for(i = 0; s[i] != '\0'; i++)
	{
		current = &s[i];  //assign the address of the ith of "s" to "current"
		current++;  //go to the next adjacent address
	}
	current = first;

	cout << "output current as a string: " << current << endl;

	cout << "--------------------------------------------" << endl;

	cout << "output current element by element: ";
	while(*current != '\0')
	{
		cout << *current;
		current++;
	}
	cout << endl;

	return 0;
}

/*
n: 123
x: 123.45
s: ABC 456 DEF
--------------------------------------------
&n: 0x62fddc
&x: 0x62fdd0
&s: 0x62fdb0
--------------------------------------------
integerPointer  : 0x62fddc
doublePointer   : 0x62fdd0
stringPointer   : 0x62fdb0
--------------------------------------------
*integerPointer  : 123
*doublePointer   : 123.45
*stringPointer   : ABC 456 DEF
--------------------------------------------
output current as a string: ABC 456 DEF
--------------------------------------------
output current element by element: ABC 456 DEF
 */
