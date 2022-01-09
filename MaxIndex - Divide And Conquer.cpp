#include <iostream>
using namespace std;

// Algorithm: MaxIndex(A[l..r])
// Input: A portion of array A[0...n-1] with l and r indices but l <= r
// Output: The index of the maximum index
int MaxIndex(int A[], int l, int r)
{
    int temp1, temp2;

    if (l == r)
        return l;
    else
    {
        temp1 = MaxIndex(A, l, ((l + r) / 2));
        temp2 = MaxIndex(A, ((l + r) / 2) + 1, r);

        if (A[temp1] >= A[temp2])
            return temp1;
        else
            return temp2;
    }

    return -1;
}

int main()
{
    //          0  1   2   3    4    5   6   7    8   9
    int A[] = {10, 2, 51, 39, 101, 272, 76, 101, 200, 13};

    int l = 0;
    int r = (sizeof(A) / sizeof(A[0])) - 1;

    int max = MaxIndex(A, l, r);

    cout << "Maximum Index is: " << max << ", which is: " << A[max] << endl;

    return 0;
}