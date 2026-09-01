class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        int n = nums.size();
        if (n < 3) return -1;

        int mini = INT_MAX;

        for (int i = 0; i < n - 2; i++) {

            if (mp[nums[i]] >= 3) {

                int j = i + 1;

                while (j < n - 1) {

                    if (nums[j] == nums[i]) {

                        int k = j + 1;

                        while (k < n) {
                            if (nums[k] == nums[i]) {
                                mini = min(mini, 2 * (k - i));
                            }
                            k++;
                        }
                    }

                    j++;
                }
            }
        }

        return mini == INT_MAX ? -1 : mini;
    }
};