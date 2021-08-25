#include <iostream>

using namespace std;

int main()
{
    string s = "abc def ghi";
    int num_characters_in_s = s.length();  //including spaces

    cout << "num_characters_in_s: " << num_characters_in_s << endl;

    return 0;
}

/*
num_characters_in_s: 11
*/
