#include <iostream>

using namespace std;

int main()
{
    string message;

    cout << "Enter a message: ";
    getline(cin, message);  //read a text from the input stream (keyboard) and store the text in "message"
    cout << "message: " << message << endl;

    return 0;
}

/*
Enter a message: Hello Frog Bye Frog
message: Hello Frog Bye Frog
*/
