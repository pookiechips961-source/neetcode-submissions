auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> aset;

    for(int x: nums)
    {
        if(aset.contains(x)) return true;
        aset.insert(x);
    }
    return false;
    }

};