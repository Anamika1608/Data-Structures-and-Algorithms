class Solution {
    public:
        int characterReplacement(string s, int k) {
            int maxFreq=0, l=0,r=0,maxLen=0;
    
            vector<int>m(26,0);
    
            while(r<s.length()){
                m[s[r]-'A'] ++;
                maxFreq = max(maxFreq, m[s[r]-'A']);
    
                if((r-l+1)- maxFreq > k){
                    m[s[l]-'A']--;
                    l++;
                }
                
                maxLen = max(maxLen, r-l+1);
                r++;
            }
    
            return maxLen;
        }
};
    