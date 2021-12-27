#include <iostream>
using namespace std;

/*
// Iterative method
int S(int n)
{
	int sum = 0;
	
	if (n == 1)
		return 1;
	else
	{
		for (int i = 1; i <= n; i++)
			sum += i * i * i;
			
		return sum;
	}
}
*/

// recursive method
int S(int n)
{
	if (n == 1)
		return 1;
	else
		return S(n - 1) + n*n*n;
}

int main()
{
	int num;
	cout << "Enter an integer number as a limit: ";
	cin >> num;

	cout << "The sum of the first " << num << " cubes is " << S(num) << endl;

    return 0;
}

