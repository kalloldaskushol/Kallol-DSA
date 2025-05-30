#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8}, n = 7;

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);  
        if (currSum < 0)// Reset if sum goes negative
        {
            currSum = 0;
        }
    }

    cout << maxSum << endl;
    return 0;
}
