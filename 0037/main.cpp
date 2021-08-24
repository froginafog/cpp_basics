#include <iostream>

using namespace std;

int main()
{
    int data[] = {10, 20, 30, 40, 50};
    int total_num_bytes;
    int num_bytes_per_item;
    int num_items;

    total_num_bytes = sizeof(data);
    num_bytes_per_item = sizeof(data[0]);
    num_items = total_num_bytes / num_bytes_per_item;

    cout << "total_num_bytes: " << total_num_bytes << endl;
    cout << "num_bytes_per_item: " << num_bytes_per_item << endl;
    cout << "num_items: " << num_items << endl;

    cout << "data: " << endl;
    for(int i = 0; i < num_items; i++)
    {
        cout << data[i] << endl;
    }

    return 0;
}

/*
total_num_bytes: 20
num_bytes_per_item: 4
num_items: 5
data:
10
20
30
40
50
*/
