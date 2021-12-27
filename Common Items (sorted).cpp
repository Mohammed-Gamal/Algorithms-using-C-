#include <iostream>
using namespace std;

int main() {
	int L1[] = { 2, 5, 5, 5 }, L2[] = { 2, 2, 3, 5, 5, 7 };

	int size1 = sizeof(L1) / sizeof(L1[0]);
	int size2 = sizeof(L2) / sizeof(L2[0]);

	cout << "Size of L1: " << size1 << ", Size of L2: " << size2 << endl;

	int i = 0, j = 0;

	cout << "\nCommon items are: ";
	while (i < size1 && j < size2)
	{
		if (L1[i] == L2[j])
		{
			cout << L1[i] << "  ";

			i++;
			j++;
		}
		else if (L1[i] < L2[j])
			i++;
		else // if (L1[i] > L2[j])
			j++;
	}

	cout << endl;

	return 0;
}
