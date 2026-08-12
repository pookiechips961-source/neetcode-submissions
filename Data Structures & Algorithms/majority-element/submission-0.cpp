class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = nums[0];
        int count = 0;

        for(int x: nums)
        {
            if(!count) c = x;
            (x == c) ? count++:count--; 
        }
        return c;
    }
};