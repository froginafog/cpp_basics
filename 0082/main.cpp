#include <iostream>

using namespace std;

void f();

int main()
{
	int n = 0;

	f();
	cout << "n (from main()): " << n << endl;

	f();
	cout << "n (from main()): " << n << endl;

	f();
	cout << "n (from main()): " << n << endl;

	return 0;
}

void f()
{
	static int n = 0;  //A static variable is only initialized once.

	cout << "n (from f()): " << n << endl;
	n++;

	//A static variable maintains its value even after leaving the function.
}

/*
n (from f()): 0
n (from main()): 0
n (from f()): 1
n (from main()): 0
n (from f()): 2
n (from main()): 0
 */
