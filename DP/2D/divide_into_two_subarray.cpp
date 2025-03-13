class Solution {
    public:
    bool findAns(vector<int>& nums,vector<vector<int>>&dp,int target, int i ){
        if(i==0) return (nums[i] == target);
        if(target == 0) return true;
        if(dp[i][target] != -1) return dp[i][target];
        bool notTake = findAns(nums,dp,target,i-1);
        bool take = false;
        if(target>=nums[i])
            take = findAns(nums,dp,target-nums[i],i-1);
        return dp[i][target] = take || notTake;
    }
        bool canPartition(vector<int>& nums) {
            int sum = 0;
            int n = nums.size();
            if(n==1) return false;
            if(n==2 && nums[0] == nums[1]) return true;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
            }
            if (sum%2!=0) return false;
            int target = sum/2;
            vector<vector<int>>dp(n,vector<int>(target+1,-1));
            return findAns(nums,dp,target,n-1);
        }
    };