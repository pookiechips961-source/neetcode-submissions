auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashset;

        for(int i = 0; i < nums.size(); i++)
        {
            if(hashset.contains(target - nums[i])) return {hashset[target-nums[i]], i};

            hashset.emplace(nums[i], i);
        }
        
    }
};
