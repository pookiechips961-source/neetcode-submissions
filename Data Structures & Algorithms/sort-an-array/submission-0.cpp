class Solution {
public:

    void swap(int &x, int &y)
    {
        
    }
    vector<int> sortArray(vector<int>& nums) {

        for(int j = 0; j < nums.size()-1; j++)
        {
            for(int i = 0; i < nums.size() - 1; i++)
            { 
                if(nums[i] > nums[i+1]) {
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }

        }
        
        return nums;
        
    }
};