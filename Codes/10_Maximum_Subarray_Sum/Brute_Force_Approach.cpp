#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 4}, n = 5;

    int maxSUM = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSUM = 0;
        for (int end = st; end < n; end++)
        {
            currSUM = currSUM + arr[end];
            maxSUM = max(currSUM, maxSUM);
        }
    }

    cout << maxSUM << endl;
    return 0;
}

/*
| st | end | Subarray     | currSUM | maxSUM |
| -- | --- | ------------ | ------- | ------ |
| 0  | 0   | \[0]         | 0       | 0      |
| 0  | 1   | \[0,1]       | 1       | 1      |
| 0  | 2   | \[0,1,2]     | 3       | 3      |
| 0  | 3   | \[0,1,2,3]   | 6       | 6      |
| 0  | 4   | \[0,1,2,3,4] | 10      | 10     |
| 1  | 1   | \[1]         | 1       | 10     |
| 1  | 2   | \[1,2]       | 3       | 10     |
| 1  | 3   | \[1,2,3]     | 6       | 10     |
| 1  | 4   | \[1,2,3,4]   | 10      | 10     |
| 2  | 2   | \[2]         | 2       | 10     |
| 2  | 3   | \[2,3]       | 5       | 10     |
| 2  | 4   | \[2,3,4]     | 9       | 10     |
| 3  | 3   | \[3]         | 3       | 10     |
| 3  | 4   | \[3,4]       | 7       | 10     |
| 4  | 4   | \[4]         | 4       | 10     |

*/