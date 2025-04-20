class Solution {
    private:
      bool isPalindrome(int i, int j, string&a) {
        if (i == j) return true;
        while (i < j) {
            if (a[i] != a[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    
        int findAns(int i, string s, vector<int>&dp){
            if(i== s.length()) return 0;
            int mini = INT_MAX;
    
            if(dp[i] != -1) return dp[i];
    
            for(int j=i;j<s.length();j++){
                if(isPalindrome(i,j,s)){
                    int cost = 1+findAns(j+1,s,dp);
                    mini = min(mini,cost);
                }
                
            }
    
            return dp[i] = mini;
        }
    
    public:
        int minCut(string s) {
            int n = s.length();
            vector<int>dp(n+1,0);
            // return findAns(0,s,dp)-1;
            for(int i=n-1;i>=0;i--){
                int mini = INT_MAX;
                for(int j=i;j<n;j++){
                    if(isPalindrome(i,j,s)){
                    int cost = 1+dp[j+1];
                    mini = min(mini,cost);
                }
                }
                dp[i]= mini;
            }
            return dp[0]-1;
        }
    };
    