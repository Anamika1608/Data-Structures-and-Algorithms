#include <bits/stdc++.h>
using namespace std;

bool Pallindrome(string str,int i)
{
    int j = str.length()-(i+1);
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    return Pallindrome(str,i+1);
}

int main(){
    string ques = "book";
    cout << Pallindrome(ques,0);
}
