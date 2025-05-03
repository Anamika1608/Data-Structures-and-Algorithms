class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int n = nums.size(), maxLen = 0, li = 0, ri = 0, zeroTaken = 0;
    
            while (ri < n) {
                if (nums[ri] == 1) {
                    maxLen = max(maxLen, ri - li + 1);
                    ri++;
                } else {
                    if (zeroTaken == k) {
                        if (nums[li] == 0) zeroTaken--;
                        li++;
                    }else {
                        zeroTaken++;
                        maxLen = max(maxLen, ri - li + 1);
                        ri++;
                    }
                }
            }
            return maxLen;
        }
};
    