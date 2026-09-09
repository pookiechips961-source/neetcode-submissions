class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> freq;

        for(int n: nums)
        {
            freq[n]++;
        }

        vector<vector<int>> buck(nums.size()+1);

        for(auto& [n, f]: freq)
        {
            buck[f].push_back(n);
        }

        vector<int> res;

        for(int i = buck.size()-1; i >= 0 && res.size() < k; --i)
        {
            for(int n: buck[i])
            {
                res.push_back(n);
                if(res.size() == k) break;
            }
        }

        return res;
    }
};
