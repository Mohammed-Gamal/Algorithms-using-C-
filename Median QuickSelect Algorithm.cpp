/*

	- C++ program to find the median using 'Decrease And Conquer' approach
	
	- LomutoPartition() + QuickSelect()
	
	- Time Complexity:
						Worst: O(n^2)
						Average: O(n)
						Best: O(n)
*/

#include <iostream>
#include <cmath> // for ceil()
using namespace std;


void print(int list[], int n)
{
	cout << "List items: ";
	for (int i = 0; i < n; i++)
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

int QuickSelect(int A[], int l, int r, int k)
{
	int s = LomutoPartition(A, l, r);

	if (s = k - 1)
		return A[s];
	else if (s > l + k - 1)
		QuickSelect(A, l, s - 1, k);
	else
		QuickSelect(A, s + 1, r, k - 1 - s);
}

int main()
{
	int A[] = { 30, 10, 12, 5, 90, 7, 120 }; // { 10, 12, 2, 5, 30, 7, 1 };

    double n = sizeof(A) / sizeof(A[0]);

	double k = ceil(n / 2); // k-th element


	print(A, n);

	int median = QuickSelect(A, 0, n - 1, k); // 7

	print(A, n);

	cout << "\nMedian is " << median << endl;

	return 0;
}
