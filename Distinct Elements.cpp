#include <iostream>
using namespace std;

void print(int A[], int n)
{
	cout << "List items: ";
	for (int i = 0; i < n; i++)
		cout << A[i] << "  ";
	cout << endl;
}

bool unique(int A[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (A[i] == A[j])
				return false;
	return true;
}

int main()
{
	int A[] = {2, 4, 3, 5, 6};
	int n = sizeof(A) / sizeof(A[0]);

	print(A, n);

	if (unique(A, n))
		cout << "List items are unique!" << endl;
	else
		cout << "List items are not unique!" << endl;

	return 0;
}
