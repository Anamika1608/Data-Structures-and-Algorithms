class Solution {
    public:
      int findAns(vector<vector<int>>& arr, int i, int prev,vector<vector<int>>&dp){
          if(dp[i][prev]!=-1) return dp[i][prev];
          if(i==0){
              int maxi=0;
              for(int j=0;j<3;j++){
                  if(j!=prev){
                      maxi = max(maxi,arr[i][j]);
                  }
              }
              return dp[i][prev] = maxi;
          };
          int maxi = 0;
          for(int j=0;j<3;j++){
              if(j!=prev){
                  maxi = max(maxi,arr[i][j]+findAns(arr,i-1,j,dp));
              }
          }
          return dp[i][prev]=maxi;
      }
      int maximumPoints(vector<vector<int>>& arr) {
          int n = arr.size();
          vector<vector<int>>dp(n,vector<int>(4,-1));
          return findAns(arr,n-1,3,dp);
      }
  };