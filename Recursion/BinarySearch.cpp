#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int k, int s , int e){
    if(s>e) return false;
    int mid = (s+e)/2;
    // cout << arr[s] << endl;
    if(arr[mid]== k) return true;
    else if(arr[mid]>k) return search(arr,k,s, mid-1); 
    else return search(arr,k,mid+1,e); 
}

int main(){
    
    int array[5] = {1, 2, 3, 4, 5};
    int target = 10;
    cout << search(array, target, 0, 4) << endl;
}
