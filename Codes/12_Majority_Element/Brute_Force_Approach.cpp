#include <bits/stdc++.h>
using namespace std;

int MJ(vector<int> nums)
{
    vector<int> ans;
    int n = nums.size();

    for(int value : nums){
        int freq = 0 ;
        
        for(int value_Copy : nums){
            if(value == value_Copy) freq++;
        }
        if(freq > (n/2)) {
            return value;
        }
    }

}
int main()
{
    vector<int> nums = {2,2,2,2,1,1,1};

    int ans = MJ(nums);

    cout << ans << endl;
    return 0;
}