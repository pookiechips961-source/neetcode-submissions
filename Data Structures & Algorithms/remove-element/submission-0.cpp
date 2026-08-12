auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = nums.size();
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == val)
            {
                ans--;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return ans;
    }
};