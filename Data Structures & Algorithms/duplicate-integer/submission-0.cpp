auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> present;
        for(int n: nums)
        {
            if(present.count(n)) return true;
            present.insert(n);
        }
        return false;
        
    }
};