class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = 0;

        int mx = nums[0];
        int mn = nums[0];

        int currMax = 0;
        int currMin = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];

            currMax = max(nums[i], currMax + nums[i]);
            if(currMax > mx)
                mx = currMax;

            currMin = min(nums[i], currMin + nums[i]);
            if(currMin < mn)
                mn = currMin;
        }

        if(mx < 0)
            return mx;

        return max(mx, sum - mn);
    }
};