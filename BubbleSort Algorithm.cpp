// Time Complexity: Worst/Average: O(n^2), Best: O(n)

#include <iostream>
using namespace std;

void BubbleSort(int list[], int size)
{
	for (int i = 0 ; i < size - 1 ; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (list[j + 1] < list[j])
				swap(list[j], list[j + 1]);
			else
				continue;
		}
	}
}

void swap(int &x, int &y)
{
	int temp;

	temp = x;

	x = y;
	y = temp;
}

void print(int list[], int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << "  ";
}

int main() 
{
	int list[] = {30, 5, 10, 50, 2, 100}, size;
	size = sizeof(list) / sizeof(list[0]);

	cout << "List before sorting: ";
	print(list, size);

	BubbleSort(list, size);

	cout << "\n\nList after sorting: ";
	print(list, size);

    return 0;
}

