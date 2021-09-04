#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> A;
	stack<int> B;

	for(int n = 1; n <= 5; n++)
	{
		A.push(n);
	}

	for(int n = 6; n<= 10; n++)
	{
		B.push(n);
	}

	A.swap(B);  //swap the elements of A with the elements of B

	cout << "A: ";
	while(!A.empty())
	{
		cout << A.top() << ' ';
		A.pop();
	}
	cout << endl;

	cout << "B: ";
	while(!B.empty())
	{
		cout << B.top() << ' ';
		B.pop();
	}
	cout << endl;

	return 0;
}

/*
A: 10 9 8 7 6
B: 5 4 3 2 1
 */
