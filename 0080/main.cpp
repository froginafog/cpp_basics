#include <iostream>

using namespace std;

int main()
{
	//cards
	enum Faces{ACE = 1, DEUCE, THREE, FOUR, FIVE,
		       SIX, SEVEN, EIGHT, NINE,
		       TEN, JACK, QUEEN, KING};  //KING = 13

	enum Suits{DIAMOND = 1, CLUBS, HEARTS, SPADES};  //SPADES = 4

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
Faces: 1 2 3 4 5 6 7 8 9 10 11 12 13
Suits: 1 2 3 4
 */
