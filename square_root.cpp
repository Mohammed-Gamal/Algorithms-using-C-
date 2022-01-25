// Time Complexity: O(n)

#include <iostream>
using namespace std;

int square_root(int x)
{
    int y = x;

    for (int i = 0; i < x; i++)
        y = (y + x / y) / 2;

    cout << "The square root is " << y;
}

int main()
{
    int x;
    cout << "Etner a value: ";
    cin >> x;

    square_root(x);

    return 0;
}