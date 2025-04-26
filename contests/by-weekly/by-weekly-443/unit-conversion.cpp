class Solution {
    public:
        vector<int> baseUnitConversions(vector<vector<int>>& conversions) {
            int n = conversions.size();
            int mod = 1e9+7;
            vector<int>ans(n+1,0);
            ans[0] = 1;
            for(int i=0;i<conversions.size();i++){
                if(conversions[i][0] == 0) ans[conversions[i][1]] = (conversions[i][2])% mod;
                else {
                    ans[conversions[i][1]] = (1LL * ans[conversions[i][0]] * conversions[i][2]) % mod;
                }
            }
            return ans;
        }
};