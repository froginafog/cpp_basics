#include <iostream>

using namespace std;

int main()
{
	char character;
	int ascii_value;

    for(character = '0'; character <= '9'; character++)
	{
        ascii_value = character;
        cout << "character: " << character << " , " << "ascii_value: " << ascii_value << endl;
	}

	cout << "-----------------------------------------------" << endl;

	for(character = 'A'; character <= 'Z'; character++)
	{
        ascii_value = character;
        cout << "character: " << character << " , " << "ascii_value: " << ascii_value << endl;
	}

	cout << "-----------------------------------------------" << endl;

    for(character = 'a'; character <= 'z'; character++)
	{
        ascii_value = character;
        cout << "character: " << character << " , " << "ascii_value: " << ascii_value << endl;
	}

	return 0;
}

/*
character: 0 , ascii_value: 48
character: 1 , ascii_value: 49
character: 2 , ascii_value: 50
character: 3 , ascii_value: 51
character: 4 , ascii_value: 52
character: 5 , ascii_value: 53
character: 6 , ascii_value: 54
character: 7 , ascii_value: 55
character: 8 , ascii_value: 56
character: 9 , ascii_value: 57
-----------------------------------------------
character: A , ascii_value: 65
character: B , ascii_value: 66
character: C , ascii_value: 67
character: D , ascii_value: 68
character: E , ascii_value: 69
character: F , ascii_value: 70
character: G , ascii_value: 71
character: H , ascii_value: 72
character: I , ascii_value: 73
character: J , ascii_value: 74
character: K , ascii_value: 75
character: L , ascii_value: 76
character: M , ascii_value: 77
character: N , ascii_value: 78
character: O , ascii_value: 79
character: P , ascii_value: 80
character: Q , ascii_value: 81
character: R , ascii_value: 82
character: S , ascii_value: 83
character: T , ascii_value: 84
character: U , ascii_value: 85
character: V , ascii_value: 86
character: W , ascii_value: 87
character: X , ascii_value: 88
character: Y , ascii_value: 89
character: Z , ascii_value: 90
-----------------------------------------------
character: a , ascii_value: 97
character: b , ascii_value: 98
character: c , ascii_value: 99
character: d , ascii_value: 100
character: e , ascii_value: 101
character: f , ascii_value: 102
character: g , ascii_value: 103
character: h , ascii_value: 104
character: i , ascii_value: 105
character: j , ascii_value: 106
character: k , ascii_value: 107
character: l , ascii_value: 108
character: m , ascii_value: 109
character: n , ascii_value: 110
character: o , ascii_value: 111
character: p , ascii_value: 112
character: q , ascii_value: 113
character: r , ascii_value: 114
character: s , ascii_value: 115
character: t , ascii_value: 116
character: u , ascii_value: 117
character: v , ascii_value: 118
character: w , ascii_value: 119
character: x , ascii_value: 120
character: y , ascii_value: 121
character: z , ascii_value: 122
*/
