#include <iostream>
using namespace std;

void print(int list[], int size)
{
	cout << "List items: ";
	for (int i = 0; i < size; i++)
		cout << list[i] << "  ";
	cout << endl;
}

void swap(int& x, int& y)
{
    int temp = x;

    x = y;
    y = temp;
}

int LomutoPartition(int A[], int l, int r)
{
	int pivot = A[l];
	int current = l;

	for (int i = l + 1; i <= r; i++)
	{
		if (A[i] < pivot)
		{
			current++;
			swap(A[i], A[current]);
		}
	}
	swap(A[l], A[current]);

	return current;
}

int main()
{
	int list[] = { 5, 7, 2, 6, 4, 9 }, size;
    size = sizeof(list) / sizeof(list[0]);

	print(list, size);
	LomutoPartition(list, 0, size - 1); // result: 4 2 5 6 7 9
	print(list, size);

	return 0;
}
