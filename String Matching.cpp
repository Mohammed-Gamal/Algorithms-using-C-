// C++ Brute Force StringMatch Program

#include <iostream>
using namespace std;

void StringMatch(char* txt, char* pat)
{
	int n = strlen(txt);
	int m = strlen(pat);

	cout << "Text: " << txt << endl;
	cout << "Pattern: " << pat << endl;
	cout << "n = " << n << ", m = " << m << endl;

	for (int i = 0; i <= n - m; i++)
	{
		int j = 0;
		while (j < m && pat[j] == txt[j + i])
			j += 1;

		if (j == m)
			cout << "\nPattern '" << pat << "' is found starting from index " << i << " to " << i + m - 1 << endl;
	}
}

int main() 
{
	char T[] = "NOBODY NOTICED HIM";
	char P[] = "NOT";

	StringMatch(P, T);

    return 0;
}

/* 
// Using for loop instead of while loop
for (int i = 0; i <= n - m; i++)
{
	int j;

	for (j = 0; j < m; j++)
		if (txt[i + j] != pat[j])
			break;

	if (j == m)
		cout << "Pattern found at index " << i << endl;
}
*/

