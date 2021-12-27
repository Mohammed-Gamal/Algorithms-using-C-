// Time Complexity: Worst: O(n^2), Average/Best: O(n log n)

#include <iostream>
using namespace std;

void print(int A[], int size)
{
	cout << "List items: ";
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
}

void swap(int& x, int& y)
{
	int temp = x;

	x = y;
	y = temp;
}

int HoarePartition(int A[], int l, int r)
{
	int pivot = A[l];
	int i = l, j = r + 1;

	do
	{
		do {
			i++;
		} while (A[i] < pivot);  // until A[i] >= p

		do {
			j--;
		} while (A[j] > pivot);  // until A[j] <= p

		swap(A[i], A[j]);

	} while (i < j);  // until i >= j

	swap(A[i], A[j]); // undo last swap when i >= j
	swap(A[l], A[j]);

	return j;
}

void QuickSort(int A[], int l, int r)
{
	if (l < r)
	{
		int s = HoarePartition(A, l, r);

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
