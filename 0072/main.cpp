#include <iostream>

using namespace std;

int main()
{
	char choice;

	cout << "Enter A, B, C, or D: ";
	cin >> choice;

	switch(choice)
	{
        case 'A':
            cout << "Menu A:" << endl;
            cout << "Hamburger, Fries, Drink" << endl;
            break;
        case 'B':
            cout << "Menu B:" << endl;
            cout << "Hot Dog, Fries, Drink" << endl;
            break;
        case 'C':
            cout << "Menu C:" << endl;
            cout << "Pizza, Fries, Drink" << endl;
            break;
        case 'D':
            cout << "Menu D:" << endl;
            cout << "Pita, Fries, Drink" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
	}

	return 0;
}

/*
Enter A, B, C, or D: C
Menu C:
Pizza, Fries, Drink
*/
