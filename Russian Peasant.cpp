// Time Complexity: O(1)

#include <iostream>
using namespace std;

/*
// Iterative method
int russian(int a, int b)
{
	int x = a, y = b;
	int z = 0;

	while (x > 0)
	{
		if (x % 2 == 1)
			z += y;

		y = y << 1;
		x = x >> 1;
	}

	return z;
}
*/

// recursion method
int russianRec(int a, int b)
{
	if (a == 0)
		return 0;
	else if (a % 2 != 0)
		return b + russianRec(a / 2, b * 2);
	else
		return russianRec(a / 2, b * 2);
}

int main()
{
	int a, b;
	
	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: ";
	cin >> b;

	cout << "\nMultiplication Result: " << russianRec(a, b) << endl;

	return 0;
}
