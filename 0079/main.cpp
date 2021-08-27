#include <iostream>

using namespace std;

int main()
{
	//cards (for game)
	enum Faces{ACE, DEUCE, THREE, FOUR, FIVE,
		       SIX, SEVEN, EIGHT, NINE,
		       TEN, JACK, QUEEN, KING};

	enum Suits{DIAMOND, CLUBS, HEARTS, SPADES};

	cout << "Faces: ";
	for(int i = ACE; i <= KING; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "Suits: ";
	for(int i = DIAMOND; i <= SPADES; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}

/*
Faces: 0 1 2 3 4 5 6 7 8 9 10 11 12
Suits: 0 1 2 3
 */
