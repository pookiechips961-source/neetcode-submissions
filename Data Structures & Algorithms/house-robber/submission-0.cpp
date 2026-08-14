class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int dp[] = {0, nums[0]};

        for(int i = 1; i < nums.size(); i++)
        {
            if(dp[0] + nums[i] > dp[1])
            {
                swap(dp[0], dp[1]);
                dp[1] += nums[i];
            }
            else
            {
                dp[0] = dp[1];
            }
        }
        return dp[1];
    }
};