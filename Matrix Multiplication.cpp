#include <iostream>
using namespace std;

int main()
{
    int a[10][10], r1, c1,
        b[10][10], r2, c2,
        mult[10][10];

    cout << "Enter rows of first matrix: ";
    cin >> r1;

    cout << "Enter columns of first matrix: ";
    cin >> c1;

    cout << "Enter rows of second matrix: ";
    cin >> r2;

    cout << "Enter columns of second matrix: ";
    cin >> c2;

    // If columns of first matrix != rows of second matrix
    while (c1 != r2)
    {
        cout << "Error, Insufficient inputs!";

        cout << "Enter rows of first matrix: ";
        cin >> r1;
        
        cout << "Enter columns of first matrix: ";
        cin >> c1;

        cout << "Enter rows of second matrix: ";
        cin >> r2;

        cout << "Enter columns of second matrix: ";
        cin >> c2;
    }

    // Iterators
    int i, j, k;

    // Elements of first matrix
    cout << "\nEnter elements of matrix 1:" << endl;
    cout << "---------------------------------" << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            cout << "Enter element a (row " << i + 1 << ") (column " << j + 1 << ") : ";
            cin >> a[i][j];
        }

    // Elements of second matrix
    cout << "\nEnter elements of matrix 2:" << endl;
    cout << "---------------------------------" << endl;
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << "Enter element b (row " << i + 1 << ") (column " << j + 1 << ") : ";
            cin >> b[i][j];
        }

    // Initializing matrix mult to 0
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
        }

    // Multiplying matrix a and b and storing result in array mult
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Print the final multiplication results
    cout << "Output: " << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];

            if (j == c2 - 1)
                cout << endl;
        }

    return 0;
}

