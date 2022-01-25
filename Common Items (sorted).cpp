// Note: the two lists need to be sorted in order to apply this technique

#include <iostream>
using namespace std;

void print(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << "  ";
	cout << endl;
}

void common_items(int A1[], int n1, int A2[], int n2)
{
	int i = 0, j = 0;
	while (i < n1 && j < n2)
	{
		if (A1[i] == A2[j])
		{
			cout << A1[i] << "  ";
			i += 1;
			j += 1;
		}
		else if (A1[i] < A2[j])
			i += 1;
		else
			j += 1;
	}
}

int main()
{
	int A1[] = {2, 5, 5, 5}, A2[] = {2, 2, 3, 5, 5, 7};

	int n1 = sizeof(A1) / sizeof(A1[0]);
	int n2 = sizeof(A2) / sizeof(A2[0]);

	// Print out the two arrays
	cout << "List 1: ";
	print(A1, n1);

	cout << "List 2: ";
	print(A2, n2);

	// Find the common items
	cout << "\nCommon items: ";
	common_items(A1, n1, A2, n2);
	cout << endl;

	return 0;
}
