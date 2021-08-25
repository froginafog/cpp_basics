#include <iostream>

using namespace std;

int main()
{
	string array_of_strings[]{"Yesterday was warm.", "Today is cool.", "Tomorrow will be cold."};
    	int num_strings = sizeof(array_of_strings)/sizeof(array_of_strings[0]);

	for(int i = 0; i < num_strings; i++)
	{
        cout << array_of_strings[i] << endl;
	}

	return 0;
}

/*
Yesterday was warm.
Today is cool.
Tomorrow will be cold.
 */
