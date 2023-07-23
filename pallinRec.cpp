#include<iostream>
using namespace std;

bool isPallindrome(string s, int l, int h){
    //base case
    if(l>h)
        return true;

    if(s[l] != s[h]){
        return false;
    }
    else{
        return isPallindrome(s, l+1, h-1);
    }
}

int main(){

    string s = "aabbccbbaa";

    int ans = isPallindrome(s, 0, s.length()-1);

    if(ans){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}