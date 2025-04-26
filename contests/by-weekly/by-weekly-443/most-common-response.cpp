class Solution {
    public:
        string findCommonResponse(vector<vector<string>>& responses) {
            map<string,set<int>>m;
            for(int i=0;i<responses.size();i++){
                for(int j=0; j<responses[i].size();j++){
                    m[responses[i][j]].insert(i);
                }
                
            }
            int maxi = INT_MIN;
            string ans = "";
            
            for(auto&[key,value] : m){
                int count = value.size();
                if(maxi< count|| (count== maxi && key<ans)) {
                    ans = key;
                    maxi = count;
                }
                
            }
    
            return ans;
             
        }
};