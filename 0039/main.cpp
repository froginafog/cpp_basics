#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 3; i++)  //outer loop
    {
        cout << "inside the outer loop" << endl;
        for(int j = 0; j < 3; j++)  //inner loop
        {
            cout << "inside the inner loop" << endl;
            cout << "i: " << i << " , " << "j: " << j << endl;
        }
    }

    return 0;
}

/*
inside the outer loop
inside the inner loop
i: 0 , j: 0
inside the inner loop
i: 0 , j: 1
inside the inner loop
i: 0 , j: 2
inside the outer loop
inside the inner loop
i: 1 , j: 0
inside the inner loop
i: 1 , j: 1
inside the inner loop
i: 1 , j: 2
inside the outer loop
inside the inner loop
i: 2 , j: 0
inside the inner loop
i: 2 , j: 1
inside the inner loop
i: 2 , j: 2
*/
