class Solution {
    public:
        int totalFruit(vector<int>& fruits) {
            int maxLen = 0, l=0,r=0,count=0;
            unordered_map<int,int>m;
    
            while(r<fruits.size()){
                m[fruits[r]]++;
    
                while(m.size()>2) {
                    m[fruits[l]]--;
                    if(m[fruits[l]] == 0) m.erase(fruits[l]);
                    l++;
                }
                maxLen= max(maxLen,r-l+1);
                r++;
            }
     
            return maxLen;
        }
};