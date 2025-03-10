
class Solution {
    public:
      bool findAns(int i, int t, vector<int>& arr, vector<vector<int>>&dp){
          if(t == 0) return true;
          if(i==0) return (arr[i] == t);
          
          if(dp[i][t] != -1) return dp[i][t];
          bool notTake = findAns(i-1,t,arr,dp);
          bool take = false;
          if(t >= arr[i]) take = findAns(i-1,t-arr[i],arr,dp);
          return dp[i][t] = notTake|| take;
      }
      bool isSubsetSum(vector<int>& arr, int target) {
          if(target == 0) return true;
          vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
          return findAns(arr.size()-1,target,arr,dp);
      }
  };