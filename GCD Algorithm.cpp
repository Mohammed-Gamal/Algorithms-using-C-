// C++ program to find the GCD (greatest common divisor) of two numbers

#include <iostream>
using namespace std;

/*
// Iterative method
int GCD(int m, int n)
{
	int r;

	while (n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}

	return m;
}
*/

// recursive method
int GCD(int m, int n)
{
	if (n == 0)
		return m;
	else
		return GCD(n, m % n);
}

int main()
{
	int m, n;
	cout << "Enter two numbers to find their GCD: \n" << endl;

	cout << "First Number: ";
	cin >> m;

	cout << "Second Number: ";
	cin >> n;

	cout << "\nGCD Solution is: " << GCD(m, n) << endl;

	return 0;
}
