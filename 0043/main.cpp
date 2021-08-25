#include <iostream>

using namespace std;

void print_array_of_integers(int a[], int num_items)
{
    for(int i = 0; i < num_items; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int data[]{10, 20, 30, 40, 50};
    int num_items = sizeof(data)/sizeof(data[0]);

    print_array_of_integers(data, num_items);

    return 0;
}

/*
10 20 30 40 50
*/
