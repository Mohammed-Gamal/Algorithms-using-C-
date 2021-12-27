// Time Complexity: Worst: O(n^2), Average/Best: O(n log n) 

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
	int s = l;

	for (int i = l + 1; i <= r; i++)
	{
		if (A[i] < pivot)
		{
			s++;
			swap(A[i], A[s]);
		}
	}
	swap(A[l], A[s]);

	return s;
}

void QuickSort(int A[], int l, int r)
{
	if (l < r)
	{
		int s = LomutoPartition(A, l, r);

		QuickSort(A, l, s - 1);
		QuickSort(A, s + 1, r);
	}
}

int main()
{
	int A[] = { 8, 3, 2, 9, 7, 1, 5, 4 };
	int n = sizeof(A) / sizeof(A[0]);

	print(A, n);
	QuickSort(A, 0, n - 1);
	print(A, n);

	return 0;
}
