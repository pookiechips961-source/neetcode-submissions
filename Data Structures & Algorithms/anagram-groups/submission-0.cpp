class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(auto& s: strs)
        {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>>ans;
        ans.reserve(mp.size());
        for(const auto& s: mp)
        {
            ans.push_back(s.second);
        }
        return ans;
    }
};