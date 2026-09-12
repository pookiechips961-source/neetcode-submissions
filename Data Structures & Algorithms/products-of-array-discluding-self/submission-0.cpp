class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> suff(nums.size(), 1);
        partial_sum(nums.begin(), nums.end()-1, suff.begin()+1, multiplies<int>());
        
        int p = 1;
        for(int i = nums.size()-1; i >= 0; --i)
        {
            int curr = nums[i];
            nums[i] = p;
            p *= curr;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] *= suff[i];
        }
        return nums;
    }
};
