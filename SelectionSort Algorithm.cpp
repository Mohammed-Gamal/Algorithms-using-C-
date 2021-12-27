// Time Complexity: O(n^2) for all cases

#include <iostream>
using namespace std;

void print(int list[], int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << "  ";
}

void swap(int& x, int& y)
{
	int temp;

	temp = x;

	x = y;
	y = temp;
}

void selectionSort(int list[], int size)
{
	int min;

	for (int i = 0; i < size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (list[j] < list[min])
				min = j;
		}

		swap(list[i], list[min]);
	}
}

int main()
{
	int list[] = { 30, 5, 10, 50, 2, 100 }, size;
	size = sizeof(list) / sizeof(list[0]);

	cout << "List before sorting: ";
	print(list, size);
	cout << endl;

	selectionSort(list, size);

	cout << "\nList after sorting: ";
	print(list, size);
	cout << endl;

	return 0;
}
