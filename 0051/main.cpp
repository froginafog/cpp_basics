#include <iostream>

using namespace std;

int main()
{
	char color[]{"red"};
	char * color_pointer{"green"};
	char fruit[]{'a', 'p', 'p', 'l', 'e', '\0'};  //must include '\0' to make it work properly

	cout << "color: " << color << endl;
	cout << "color_pointer: " << color_pointer << endl;
	cout << "fruit: " << fruit << endl;

	return 0;
}

/*
color: red
color_pointer: green
fruit: apple
*/
