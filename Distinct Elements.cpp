// C++ program to find the commot items between two sorted arrays

#include <iostream>
using namespace std;

bool distinct(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				return false;
			}
		}
	}
	return true;
}

void print(int arr[], int size)
{
	cout << "List: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << "  ";
}

int main()
{
	int list[6] = { 10, 200, 39, 39, 45, 25 };

	print(list, 6);

	if (distinct(list, 6) == true)
		cout << "\n\nAll elements are unique!" << endl;
	else
		cout << "\nThe list elements are not unique!" << endl;

	return 0;
}
