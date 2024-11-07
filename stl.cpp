#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,char> m = {{1,'a'},{2,'e'},{6,'i'},{7,'i'}};
            auto it = m.begin();
            while(it!=m.end()){
            cout << it->first << " " << it->second << endl;
            it++;
    }

}