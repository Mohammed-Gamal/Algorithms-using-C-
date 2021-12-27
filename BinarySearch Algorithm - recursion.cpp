// Time Complexity: O(log n) for all cases

#include <iostream>
#include <cmath>
using namespace std;

int binarySearch(int A[], int l, int r, int k)
{
	if (r >= l)
	{
		int mid = floor((l+r) / 2);

		if (k == A[mid])
			return mid;
		else if (A[mid] > k)
			return binarySearch(A, l, mid - 1, k);
		else
			return binarySearch(A, mid + 1, r, k);
	}

	return -1;
}

int main(void)
{
	int A[] = { 2, 3, 4, 10, 40 }, n, k;

	n = sizeof(A) / sizeof(A[0]);
	k = 10;

	int result = binarySearch(A, 0, n - 1, k);

	if (result == -1)
		cout << "Element is not found!" << endl;
	else
		cout << "Found element " << k << " at index: " << result << endl;

	return 0;
}
