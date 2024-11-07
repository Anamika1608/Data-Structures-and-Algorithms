#include <bits/stdc++.h>
using namespace std;

bool search(int arr[] , int n , int target){
    if(n==0) return false;
    if(arr[0] == target) return true;
    search(arr+1,n-1,target);
}
 
int main(){
    int target = 1;
    int array[5] = {1,3,3,4,5};
    cout << search(array,5,target) << endl;
}