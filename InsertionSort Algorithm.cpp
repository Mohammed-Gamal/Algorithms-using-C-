// Time Complexity: Worst/Average: O(n^2), Best: O(n)

#include <iostream>
using namespace std;

void print(int list[], int size)
{
	cout << "List items: ";
	for (int i = 0; i < size; i++)
		cout << list[i] << "  ";
	cout << endl;
}

void InsertionSort(int list[], int n)
{
	print(list, n);

	for (int i = 1; i < n; i++)
	{
		int v = list[i];

		int j = i - 1;
		while (j >= 0 && list[j] > v)
		{
			list[j + 1] = list[j];
			j--;
		}

		list[j + 1] = v;
	}

	print(list, n);
}

void start(int list[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter list item " << i << " : ";
		cin >> list[i];
	}

	InsertionSort(list, n);
}


int main()
{
	int n;
	cout << "Enter the list size: ";
	cin >> n;

	int* list = new int(n); // dynamic array

	start(list, n);  // Sample: n = 5,  elements = { 6, 4, 1, 8, 5 }

	delete(list);

	return 0;
}
