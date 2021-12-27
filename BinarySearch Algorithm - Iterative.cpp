// Time Complexity: O(log n) for all cases

#include <iostream>
#include <cmath>
using namespace std;

int binarySearch(int A[], int l, int r, int k)
{
	while (l <= r)
	{
		int m = floor((l + r) / 2);

		if (k == A[m])
			return m;
		else if (k < A[m])
			r = m - l;
		else
			l = m + 1;
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
		cout << "Element is not found, no match!" << endl;
	else
		cout << "Element " << k << " is found at index " << result << endl;

	return 0;
}
