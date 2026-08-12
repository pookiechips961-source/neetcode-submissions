class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        for(int j = 0; j < nums.size()-1; j++)
        {
            for(int i = 0; i < nums.size() - 1; i++)
            { 
                if(nums[i] > nums[i+1]) {
                swap(nums[i], nums[i+1]);
            }
        }

        }
        
        return nums;
        
    }
};