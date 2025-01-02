#include <bits/stdc++.h>
using namespace std;

int sorted(int arr[] , int i , int n){
    if(i == n-1) return 1;
    if(arr[i] > arr[i+1]) return 0;
    sorted(arr,i+1,n);
}

int sum(int arr[] , int n , int ans){
    if(n==0) return ans;
    ans+= arr[0];
    sum(arr+1,n-1,ans);
}

int main(){
    int ans = 0;

    int array[5] = {1,3,3,4,5};
    cout << sorted(array,0,5) << endl ;
    cout << sum(array,5,ans) << endl;
}
