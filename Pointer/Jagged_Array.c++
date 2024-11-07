#include <bits/stdc++.h>
using namespace std;
int score = 15; // global variable
int main(){
    int r ; 
    cout << "Enter row - " ;
    cin >> r ;
    int** arr = new int*[r];
    int* colSize = new int [r];
    for (int i=0;i<r;i++){
        int c ;
        cout << "Enter column - " ;
        cin >> c;
        colSize[i] = c;
        arr[i] = new int[c];
        for (int j=0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Printing the array -" << endl;
    for (int i=0;i<r;i++){
        int l = colSize[i];
        for (int j=0 ; j<l;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}