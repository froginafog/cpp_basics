#include <iostream>

using namespace std;

int main()
{
	string s;

	s = "ABC 123 DEF";

	char * current;  //create another pointer of the type "char"
	int i;

	for(i = 0; s[i] != '\0'; i++)
	{
		current = &s[i];  //assign the address of the ith element of "s" to "current"
		cout << "current: " << current << endl;
		current++;
	}

	return 0;
}

/*
current: ABC 123 DEF
current: BC 123 DEF
current: C 123 DEF
current:  123 DEF
current: 123 DEF
current: 23 DEF
current: 3 DEF
current:  DEF
current: DEF
current: EF
current: F
*/

