#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 8, 3, 3, 3, 2, 1, 1, 1, 5, 5, 8};
    int hash[13] = {0};
    for (int i = 0; i < 14; i++){
        hash[arr[i]]++;
    }
    cout << "1 count - " << hash[1] << endl;
    cout << "2 count - " << hash[2] << endl;
    cout << "3 count - " << hash[3] << endl;
    cout << "5 count - " << hash[5] << endl;

    string s  = "abcabbchhaaaaaaaa";
    int hashh[26] = {0};
    for (int i=0;i<s.length();i++){
        hashh[(s[i]-97)]++;
    }
    cout << hashh['h'-97] << endl;
}