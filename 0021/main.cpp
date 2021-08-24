#include <iostream>

using namespace std;

int main()
{
    int count;

    count = 1;
    do
    {
        cout << "count: " << count << endl;
        count++;
    }while(count <= 5);

    return 0;
}

/*
count: 1
count: 2
count: 3
count: 4
count: 5
*/
