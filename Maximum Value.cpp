#include <iostream>
using namespace std;

void get(int list[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter item " << i << ": ";
		cin >> list[i];
	}
}

void print(int list[], int size)
{
	cout << "List items: ";
	for (int i = 0; i < size; i++)
		cout << list[i] << "  ";
	cout << endl;
}

/*
// Iterative method
int maxVal(int list[], int n)
{
	int max = 0;

	for (int i = 1; i < n; i++)
	{
		if (list[i] > list[max])
			max = i;
		else
			continue;
	}

	return list[max];
}
*/

// recursion method
int maxValRec(int list[], int n)
{
	if (n == 1)
		return list[0];
	else
		return max(list[n - 1], maxValRec(list, n - 1));
}

int main()
{
	int n;
	cout << "Enter the size of the list: ";
	cin >> n;

	int* list = new int(n);

	get(list, n);
	print(list, n);

	cout << "\n\nMaximum value is: " << maxValRec(list, n) << endl;

	return 0;
}
