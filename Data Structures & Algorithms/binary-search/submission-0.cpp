class Solution {
public:
    int search(vector<int>& nums, int target) 
    {   
        int high = nums.size()-1;
        int low = 0;
        int mid = 0;

        while(low <= high)
        {
            mid = (high + low)/2;
            if(nums[mid] == target)return mid;
            if(target > nums[mid]) {low = mid + 1; continue;}
            if(target < nums[mid]) {high = mid - 1; continue;}
        }
        return -1;
    }
};
