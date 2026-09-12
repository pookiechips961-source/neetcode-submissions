class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.empty()) return 0;

        unordered_set<int> numSet;
        numSet.reserve(nums.size());
        numSet.insert(nums.begin(), nums.end());

        int maxLen = 0;

        for (int i : numSet) {
            if (!numSet.contains(i - 1)) 
            {
                int currentNum = i;

                while (numSet.contains(currentNum + 1))currentNum++;
                maxLen = max(maxLen, currentNum - i + 1);
            }
        }

        return maxLen;

    }
};
