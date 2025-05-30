#include <bits/stdc++.h>
using namespace std;

int MJ(vector<int> nums){
    int n = nums.size();
    int freq = 0, ans = 0;

    for(int i=0; i<n; i++){
        if(freq == 0)   ans = nums[i];
        if(ans == nums[i])  freq++;
        else    freq--;
        
        return ans;
    }
    return -1; // Return -1 if no majority element
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 1, 1, 1};

    int ans = MJ(nums);

    cout << ans << endl;
    return 0;
}
/*
| Step (i) | nums\[i] | freq | ans | Explanation                       |
| -------- | -------- | ---- | --- | --------------------------------- |
| 0        | 1        | 0    | 0   | freq is 0 → set ans = 1, freq = 1 |
| 1        | 2        | 1    | 1   | 2 ≠ 1 → freq-- → 0                |
| 2        | 2        | 0    | 1   | freq is 0 → set ans = 2, freq = 1 |
| 3        | 2        | 1    | 2   | 2 == 2 → freq++ → 2               |
| 4        | 1        | 2    | 2   | 1 ≠ 2 → freq-- → 1                |
| 5        | 1        | 1    | 2   | 1 ≠ 2 → freq-- → 0                |
| 6        | 1        | 0    | 2   | freq is 0 → set ans = 1, freq = 1 |

*/