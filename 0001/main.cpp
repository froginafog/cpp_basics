//Everything that comes after the double slash is a comment.
//A comment is non-executable code and it is ignored during the execution of the program.

/*
What comes between slash-star and star-slash is also a comment.
*/

#include <iostream> //to use cout

using namespace std;  //to use cout

//This is the main function where the code is executed.
//int means main() expects an integer to be returned at the end of the function (at return 0)
int main()
{
    cout << "Hello Frog" << endl;  //prints the text "Hello Frog" to the screen
                                   //endl means go to the next line

    cout << "Bye Frog" << endl;  //prints the text "Bye Frog" to the screen
                                 //endl means go to the next line

    return 0;  //return the value 0 to main()
}

//The output of the program:

/*
Hello Frog
Bye Frog
*/
