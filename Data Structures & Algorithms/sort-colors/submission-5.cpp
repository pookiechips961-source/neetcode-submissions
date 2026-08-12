class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[] = {0, 0, 0};

        for(auto& i : nums)
        {
            count[i]++;
        } 
        int idx = 0;
        for(int i = 0; i < 3; i++)
        {   
            while(count[i])
            {
                nums[idx] = i;
                idx++;
                count[i]--;
            }
        }
    }
};