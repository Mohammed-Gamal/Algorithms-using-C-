// Time Complexity: Worst/Average: O(n), Best: O(1)

#include <iostream>
using namespace std;

void print(int list[], int size)
{
	cout << "List items: ";
	for (int i = 0; i < size; i++)
		cout << list[i] << "  ";
	cout << endl;
}

void SequentialSearch(int list[], int n, int item)
{
	list[n] = item;

	int i = 0;
	while (list[i] != item)
		i++;

	if (i < n)
		cout << "\nThe Item '" << list[i] << "' is found at index '" << i << "'." << endl;
	else
		cout << "\nItem is not found, no match!" << endl;
}

int main()
{
	int list[] = { 30, 5, 10, 50, 2, 100 }, size;
	size = sizeof(list) / sizeof(list[0]);

	print(list, size);

	SequentialSearch(list, size, 50);

	return 0;
}
