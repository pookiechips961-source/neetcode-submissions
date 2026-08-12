auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        
        for(int i = 0; i <nums.size(); i++)
        {
            auto it = hash.find(target-nums[i]);
            if(it != hash.end()) return {it->second, i};
            hash.emplace(nums[i], i);
        }

        
    }
};
