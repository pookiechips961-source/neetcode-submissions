class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int s = nums.size();
        nums.reserve(2*s);
        for(int i = 0; i < s; i++)
        {
            nums.emplace_back(nums[i]);
        }
        return nums;
    }
};