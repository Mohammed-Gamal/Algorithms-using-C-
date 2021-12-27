#include <iostream>
using namespace std;

int BinaryDigits(int n)
{
	int count = 1;
	
	while (n > 1)
	{
		n = n / 2;
		count++;
	}
	
	return count;
}

/* 
// Recursion method

int BinRec(int num)
{
	if (num == 1)
		return 1;
	else
		return BinRec(num/2) + 1;
}
*/

int main()
{
	int num;

	cout << "Enter a decimal number: ";
	cin >> num;

	cout << "\n\nResult: " << BinaryDigits(num) << " binary digits are found!" << endl;

    return 0;
}

