auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int s = nums.size();
        vector<int> ans(2*s);

        for(int i = 0; i < s; i++)
        {
            ans[i] = nums[i];
            ans[i+s] = nums[i];
        }
        return ans;
        
    }
};