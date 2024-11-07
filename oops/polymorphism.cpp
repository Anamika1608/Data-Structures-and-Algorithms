#include <bits/stdc++.h>
using namespace std;

void swapOneTime(int i , int j , int* arr){
    if(i==j) return;
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    swapOneTime(i+1,j,arr);
}

int main(){
    int arr[5] = {18,2,6,1,10};
    for (int i=5;i>0;i--){
        swapOneTime(0,i,arr);
    }
    for(int i=0 ; i<5 ; i++){
        cout << arr[i] << ' ' ;
    }
}
