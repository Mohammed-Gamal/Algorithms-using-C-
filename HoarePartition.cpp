#include <iostream>
using namespace std;

void get(int list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter item of index " << i << " :";
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

int main()
{
	int n;
	cout << "Enter the list size: ";
	cin >> n;

	int* list = new int(n);
	get(list, n); // { 5, 7, 2, 6, 4, 9 }, 6
	
	print(list, n);
	HoarePartition(list, 0, n - 1);
	print(list, n);

	return 0;
}
