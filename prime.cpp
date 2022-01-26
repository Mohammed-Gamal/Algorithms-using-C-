// Best-Case: O(1), Worst-Case: O(n)

#include <iostream>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i <= n - 1; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (prime(n))
        cout << "Prime number!" << endl;
    else
        cout << "Not prime number!" << endl;

    return 0;
}