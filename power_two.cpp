// Power of two program

#include <iostream>
using namespace std;

int power(int n)
{
    if (n == 1)
        return 1;
    else
        return power(n - 1) + 2 * n - 1;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Power is " << power(n) << endl;

    return 0;
}