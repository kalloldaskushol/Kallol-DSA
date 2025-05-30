#include <bits/stdc++.h>
using namespace std;
/*
A subarray is a contiguous (Connected) part of an array.
It must be in order and must include consecutive elements only from the original array.

int arr[] = {1, 2, 3};

Subarrays:
            [1]
            [2]
            [3]

            [1, 2]
            [2, 3]

            [1, 2, 3]

Total subarrays for array of size n. = n(n+1)/2
*/
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}