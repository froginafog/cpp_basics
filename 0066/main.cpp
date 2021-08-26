#include <iostream>

using namespace std;

int main()
{
    //&& means "and"
	cout << "true  && true : " << (true  && true) << endl;
    cout << "true  && false: " << (true  && false) << endl;
    cout << "false && true : " << (false && true) << endl;
    cout << "false && false: " << (false && false) << endl;
    cout << "-------------------------------------------" << endl;
    //|| means "||"
	cout << "true  || true : " << (true  || true) << endl;
    cout << "true  || false: " << (true  || false) << endl;
    cout << "false || true : " << (false || true) << endl;
    cout << "false || false: " << (false || false) << endl;

    //1 means true
    //0 means false

	return 0;
}

/*
true  && true : 1
true  && false: 0
false && true : 0
false && false: 0
-------------------------------------------
true  || true : 1
true  || false: 1
false || true : 1
false || false: 0
*/
