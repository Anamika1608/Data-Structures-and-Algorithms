#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int  t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k,d;
        cin >> n >> k >> d;
        if(n==k) {
            cout << "0" << endl;
            continue;
        }
        vector<int>regrowDays;
        
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            regrowDays.push_back(x);
        }
        
        sort(regrowDays.begin(),regrowDays.end());
        
        int ans =0, remains = n;
        map<int,int>m;
        
        for(int y=0;y<d;y++){
            int c_i = 0, collected = 0; 
            while(c_i<n){
                if( (n-(collected+1)) >= k && remains!=0) {
                    collected++;
                    collected+=m[c_i];
                    m[c_i] = 0;
                    m[c_i+regrowDays[c_i]]++;
                }else if(m[c_i]!=0) collected+=m[c_i];
                else break;
            }
            remains-=collected;
            ans+=collected;
        };
        cout << ans << endl;
    }
}
