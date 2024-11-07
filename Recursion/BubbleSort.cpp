#include <bits/stdc++.h>
using namespace std;

void oneSort(int arr[],int n){
    
}

void sort (int arr[],int n){
    if(n==0) return;
    for (int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]) swap(arr[i+1],arr[i]);
        else continue;
    }
    return sort(arr,n-1);
}

int main(){
    int arr[5] = {8,4,7,2,3};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}