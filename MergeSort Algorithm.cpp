// Time Complexity: O(n log n) for all cases 

#include<iostream>
using namespace std;

void swap(int& x, int& y)
{
    int temp = x;

    x = y;
    y = temp;
}

void print(int A[], int n)
{
    cout << "List items: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}

void Merge(int A[], int l, int m, int r)
{
    int i, j, k, nl, nr;

    // size of left and right sub-arrays
    nl = m - l + 1;
    nr = r - m;

    int lA[nl], rA[nr];

    // fill left and right sub-arrays
    for (i = 0; i < nl; i++)
        lA[i] = A[l + i];

    for (j = 0; j < nr; j++)
        rA[j] = A[m + 1 + j];

    i = 0; j = 0; k = l;

    // merge temp arrays to real array
    while (i < nl && j < nr)
    {
        if (lA[i] <= rA[j])
        {
            A[k] = lA[i];
            i++;
        }
        else
        {
            A[k] = rA[j];
            j++;
        }

        k++;
    }

    // extra element in left array
    while (i < nl)
    {
        A[k] = lA[i];
        i++; k++;
    }

    // extra element in right array
    while (j < nr)
    {
        A[k] = rA[j];
        j++; k++;
    }
}

void MergeSort(int A[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        MergeSort(A, l, m);
        MergeSort(A, m + 1, r);
        Merge(A, l, m, r);
    }
}

int main()
{
    int A[] = { 30, 10, 12, 5, 90, 7, 120 }, n;
    n = sizeof(A) / sizeof(A[0]);

    print(A, n);
    MergeSort(A, 0, n - 1);
    print(A, n);
}

