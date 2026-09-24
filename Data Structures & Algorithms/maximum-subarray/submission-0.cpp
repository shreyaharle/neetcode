class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0, maxs = nums[0];
        for (int num:nums){
            if (curr<0){
                curr = 0;
            }

            curr= curr+num;
            maxs = max(curr,maxs);
        }

        return maxs;

    }
};
