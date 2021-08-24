#include <iostream>

using namespace std;

int main()
{
    string word;
    int num_words = 5;
    string words[num_words];

    for(int i = 0; i < num_words; i++)
    {
        cout << "Enter a word: ";
        cin >> word;
        words[i] = word;
    }

    cout << "words: " << endl;
    for(int i = 0; i < num_words; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}

/*
Enter a word: one
Enter a word: two
Enter a word: three
Enter a word: four
Enter a word: five
words:
one
two
three
four
five
*/
