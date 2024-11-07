#include <bits/stdc++.h>
using namespace std;

// print 1 subsequence with sum k

// bool subWithSum(int i, int arr[], vector<int> &v, int sum, int s, int n)
// {
//     if (i >= n)
//     {
//         if (s == sum)
//         {
//             for (auto i : v)
//             {
//                 cout << i << ' ';
//             }
//             cout << endl;
//              return true;
//         }
//         return false;
//     }

//     v.push_back(arr[i]);
//     s += arr[i];
//     if(subWithSum(i + 1, arr, v, sum, s, n)) return true;
//     v.pop_back();
//     s -= arr[i];
//     subWithSum(i + 1, arr, v, sum, s, n);
//     return false;
// }

// print all subsequence

// void subWithSum(int i, int arr[], vector<int> &v, int sum, int s, int n)
// {
//     if (i >= n)
//     {
//         if (s == sum)
//         {
//             for (auto i : v)
//             {
//                 cout << i << ' ';
//             }
//             cout << endl;
//         }
//         return;
//     }

//     v.push_back(arr[i]);
//     s += arr[i];
//     subWithSum(i + 1, arr, v, sum, s, n);
//     v.pop_back();
//     s -= arr[i];
//     subWithSum(i + 1, arr, v, sum, s, n);
// }

// print no. of subsequence

int subWithSum(int i , int arr[] , vector<int>&v , int sum , int s ,int n){
 if (i >= n)
    {
        if (s == sum)
        {
            // for (auto i : v)
            // {
            //     cout << i << ' ';
            // }
            cout << endl;
            return 1;
        }
        return 0;
    }

    v.push_back(arr[i]);
    s += arr[i];
    int l = subWithSum(i + 1, arr, v, sum, s, n);
    v.pop_back();
    s -= arr[i];
    int r = subWithSum(i + 1, arr, v, sum, s, n);
    return l+r;
}

int main()
{
    int arr[3] = {1, 2, 1};
    int sum = 2;
    vector<int> v;
    cout << subWithSum(0, arr, v, sum, 0, 3);
}
