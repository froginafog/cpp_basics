#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> A;

	for(int n = 1; n <= 5; n++)
	{
		A.push(n);  //this is like push_front
	}
	//A = 5, 4, 3, 2, 1

	cout << "A.size(): " << A.size() << endl;

	cout << "A: ";
	while(A.empty() == false)
	{
		cout << A.top() << ' ';
		A.pop();
	}
	cout << endl;

	cout << "A.size(): " << A.size() << endl;

	return 0;
}

/*
A.size(): 5
A: 5 4 3 2 1
A.size(): 0
 */
