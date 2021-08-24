#include <iostream>

using namespace std;

int main()
{
    int num_items = 5;
    float data_1[num_items];
    float data_2[num_items];
    float sums[num_items];

    for(int i = 0; i < num_items; i++)
    {
        cout << "Enter a number for data_1: ";
        cin >> data_1[i];
    }

    cout << "----------------------------------------" << endl;

    for(int i = 0; i < num_items; i++)
    {
        cout << "Enter a number for data_2: ";
        cin >> data_2[i];
    }

    for(int i = 0; i < num_items; i++)
    {
        sums[i] = data_1[i] + data_2[i];
    }

    cout << "----------------------------------------" << endl;

    cout << "sums: " << endl;
    for(int i = 0; i < num_items; i++)
    {
        cout << data_1[i] << " + " << data_2[i] << " = " << sums[i] << endl;
    }

    return 0;
}

/*
Enter a number for data_1: 1
Enter a number for data_1: 2
Enter a number for data_1: 3
Enter a number for data_1: 4
Enter a number for data_1: 5
----------------------------------------
Enter a number for data_2: 10
Enter a number for data_2: 20
Enter a number for data_2: 30
Enter a number for data_2: 40
Enter a number for data_2: 50
----------------------------------------
sums:
1 + 10 = 11
2 + 20 = 22
3 + 30 = 33
4 + 40 = 44
5 + 50 = 55
*/
