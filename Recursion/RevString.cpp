#include <bits/stdc++.h> 
using namespace std;

// string reverseString(string str)
// {
//     string ans;
// 	for(int i=str.length();i>=0;i--){
//         ans.push_back(str[i]);
//     }
//     return ans;
// }

// string reverseString(string str,int i , int j)
// {
//     if(i>j) return str;
//     swap(str[i],str[j]);
//     return reverseString(str,i+1,j-1);
// }

string reverseString(string str,int i)
{
    int j = str.length()-(i+1);
    if(i>j) return str;
    swap(str[i],str[j]);
    return reverseString(str,i+1);
}

int main(){
    string ques = "abcde";
    cout << reverseString(ques,0);
}
