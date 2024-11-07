#include <bits/stdc++.h>
using namespace std;
int main(){
    // int* arr = new int[5];
    // for(int i=0;i<5;i++){
    //     cin >> *(arr+i);
    // }
    // for (int i=0;i<5;i++){
    //     cout << *(arr+i) << " ";
    // }

    // int n;
    // cout << "Enter n" ;
    // cin >> n;
    // int* arr = new int[n];
    //  for(int i=0;i<n;i++){
    //     cin >> *(arr+i);
    // }
    // for (int i=0;i<n;i++){
    //     cout << *(arr+i) << " ";
    // }

    int r,c;
    cin >> r >> c;
    int** arr = new int* [r];
    for (int i=0;i<r;i++){
        arr[i] = new int [c];
        for (int j=0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    cout << " Printing the 2d array" << endl;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i=0;i<r;i++){
        delete []arr[i]; // free all the array in each row
    }
    delete []arr; // then come only array which have 1 col and n rows
}
