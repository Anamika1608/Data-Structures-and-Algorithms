#include <bits/stdc++.h>
using namespace std ;

vector<string> letterCombinations(string digits) {
        // if length is 0 || digit == 1 return empty
        // count digits
        // each digit map to array
        // select the digit mapped to in array.
        // then recursion b/w all the elements of that array such that a letter
        // should be from each element
        vector<string> ans = {};
        if (digits.length() == 0 || digits[0] == '1')
            return ans;
        map<int, array> m;
        m[1] = {};
        m[2] = {'a',b,c};
        m[3] = {d,e,f};
        m[4] = {g,h,i};
        m[5] = {j,k,l};
        m[6] = {m,n,o};
        m[7] = {p,q,r,s};
        m[8] = {t,u,v};
        m[9] = {w,x,y,z};

        vector<vector<int>> ques;
        for (auto it : digits) {
            ques.push_back(m[it])
        }
        final(ans,ques)

    }
    vector <string> final (vector <int> &ans , vector<vector<int>> ques , ){
        
    }

int main(){
    letterCombinations()
}
    
