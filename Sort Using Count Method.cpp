#include <iostream>
using namespace std;

void get(int list[], int n)
{
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter item " << i << ": ";
		cin >> list[i];
	}
}

void print(int list[], int n)
{
	cout << "List items: ";
	for (int i = 0; i < n; i++)
		cout << list[i] << "  ";
	cout << endl;
}

void countSort(int list[], int n)
{
	int newList[n], count[n];

	// Initialize the count[] array
	for (int i = 0; i < n; i++)
		count[i] = 0;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (list[i] < list[j])
				count[j]++;
			else
				count[i]++;
		}
		newList[count[i]] = list[i];
	}

	print(newList, n);
}

int main()
{
	int n;
	cout << "Enter list size: ";
	cin >> n;

	int* list = new int(n);

	get(list, n);
	print(list, n);
	countSort(list, n);

	delete(list);

	return 0;
}


/*
int main() {
	int list[5] = { 60, 35, 81, 14, 47 }, newList[5];

	int count[5];
	for (int i = 0; i < 5; i++)
		count[i] = 0;

	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (list[i] < list[j])
				count[j]++;
			else
				count[i]++;
		}
		newList[count[i]] = list[i];
	}

	cout << "List before sorting: ";
	for (int i = 0; i < 5; i++)
		cout << list[i] << "  ";

	cout << "\n\nList after sorting: ";
	for (int i = 0; i < 5; i++)
		cout << newList[i] << "  ";

	return 0;
}
*/
