class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) { // skips duplicates
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[left] + nums[right] + nums[i];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--; // search for another pair
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++; // skips duplicates left
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--; // skips duplicates right
                    }
                }
                else if (sum < 0) {
                    left++; // number is too small
                }
                else {
                    right--; // number too big
                }
            }
        }
        return ans;
    }
};