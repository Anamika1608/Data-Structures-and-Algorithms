#include <bits/stdc++.h>
using namespace std;
// a to power b

int power(int a,int b){
    if(b==1) return a;
    int temp = power(a,b/2);
    int ans = temp*temp;
    if(b%2!=0) ans*=a;
    return ans;
}

int main(){
    int a,b;
    cout << "Enter base : " ;
    cin >> a ;
    cout << "Enter power : " ;
    cin >> b ;
    cout << power(a,b);
}
