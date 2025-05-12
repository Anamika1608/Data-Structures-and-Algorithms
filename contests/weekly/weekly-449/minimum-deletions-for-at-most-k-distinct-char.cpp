class Solution {
public:
    int minDeletion(string s, int k) {
        int ans = 0, n = s.length();
        map<int,int>m;
        for(auto i : s){
            m[i]++;
        }
        if(m.size()<=k) return 0;
        vector<int>f;
        for(auto pair : m){
            f.push_back(pair.second);
        }
        sort(f.begin(),f.end(),greater<int>());
        for(int i=k;i<f.size();i++){
            ans+=f[i];
        }
        return ans;
    }
};