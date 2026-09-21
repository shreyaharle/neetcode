class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pr = 1, zerocount = 0;

        for (int num : nums) {
            if (num != 0) {
                pr = pr * num;
            }
            else {
                zerocount++;
            }
        }

        if (zerocount > 1) {
            return vector<int>(nums.size(), 0);
        }

        vector<int> res(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            if (zerocount > 0) {
                if (nums[i] == 0) {
                    res[i] = pr;
                }
                else {
                    res[i] = 0;
                }
            }
            else {
                res[i] = pr / nums[i];
            }
        }

        return res;
    }
};