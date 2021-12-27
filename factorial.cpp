// C++ program to compute factorial of a number

#include <iostream>
using namespace std;

/*
// Iterative method
int factorial(int num)
{
	int fac = 1;
	
	if (num == 0 || num == 1)
		return 1;
	else
	{
		for (int i = num; i > 0; i--)
			fac = fac * i;	
			
		return fac;
	}	
}
*/

// recursive method
int factorial(int num)
{
	if (num == 0 || num == 1)
		return 1;
	else
		return factorial(num - 1) * num;
}

int main()
{
	int n;

	cout << "Enter a number to calculate its factorial: ";
	cin >> n;

	cout << "\nFactorial of " << n << ": " << factorial(n) << endl;

    return 0;
}

