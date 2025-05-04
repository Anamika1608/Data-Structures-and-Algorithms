class Solution {
    public:
        int maxProduct(int n) {
            vector<int>v;
            while(n>0){
                v.push_back(n%10);
                n=n/10;
            }
            sort(v.begin(),v.end());
            int x = v.size();
            return v[x-1]*v[x-2];
        }
};