#include <bits/stdc++.h>
using namespace std;
//Two Pointer Approach

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i = 0;
    int j = n-1;
    int pairSum = 0;
    while (i < j)
    {
        pairSum = nums[i] + nums[j];

        if (pairSum > target)
            j--;
        else if (pairSum < target)
            i++;
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(nums, target);

    cout << "(" << ans[0] << "," << ans[1] << ")";
    return 0;
}