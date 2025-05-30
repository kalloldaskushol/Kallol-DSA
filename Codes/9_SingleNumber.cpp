/*
1^1 = 0;
0^0 = 0;
so we can say, n^n = 0;

1 ^ 0 = 1;
0 ^ 1 = 1;
so we can say, n^0 = n;

so if the array is = {2,2,1}

then 0 XOR 2 = 2;
then 2 XOR 2 = 0;
then 0 XOR 1 = 1;

so the unique element is 1.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;

        for (int value : nums)
        {
            ans = ans ^ value;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {4, 2, 4, 2, 1};
    return 0;
}