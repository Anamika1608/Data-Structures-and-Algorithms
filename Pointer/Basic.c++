#include <bits/stdc++.h>
using namespace std;
void update (int& j) {
   j++;
}
int main(){
    int i=5;
    // int &j = i; // j is the ref variable
    // changing the value of j will change the value of i
    update(i);
    cout << i << endl;
}