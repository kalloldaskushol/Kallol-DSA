#include <bits/stdc++.h>
using namespace std;

int MJ(vector<int> nums)
{
    int n = nums.size();

    int freq=1, ans=nums[0];

    for(int i=1; i<n; i++){ // O(n)
        if(nums[i] == nums[i-1]){
            freq ++;
        }else {
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2) return ans;
    }
    return -1;
}
int main()
{
    vector<int> nums = {2,2,2,2,1,1,1};

    sort(nums.begin(), nums.end()); //log(n) 

    int ans = MJ(nums);

    cout << ans << endl;
    return 0;
}