class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int asc = 1, dsc = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] == (nums[i - 1] + 1) % n)
                asc++;

            if (nums[i - 1] == (nums[i] + 1) % n)
                dsc++;
        }

        if (asc == n) {
            if (nums[0] == 0)
                return 0;

            return min(n - nums[0], nums[0] + 2);
        }

        if (dsc == n) {
            return min(n - nums[n - 1], nums[n - 1]) + 1;
        }

        return -1;
    }
};