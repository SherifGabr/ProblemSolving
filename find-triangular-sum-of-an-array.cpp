class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> newNums;
        while(nums.size() > 1)
        {
            for(int i = 1; i < nums.size(); i++)
            {
                newNums.push_back((nums[i-1] + nums[i]) % 10);
            }
            nums = newNums;
            newNums.clear();
        }
        return nums[0];
    }
};
