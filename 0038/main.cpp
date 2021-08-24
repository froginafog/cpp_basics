#include <iostream>

using namespace std;

int main()
{
    double data[] = {10.11, 20.22, 30.33, 40.44, 50.55};
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
total_num_bytes: 40
num_bytes_per_item: 8
num_items: 5
data:
10.11
20.22
30.33
40.44
50.55
*/
