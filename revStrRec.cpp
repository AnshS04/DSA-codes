#include<bits/stdc++.h>
using namespace std;

string reverseStr(string s, int l, int h){
    //base case
    if(l>h)
        return s;

    swap(s[l],s[h]);
    return reverseStr(s, l+1, h-1);
}

int main(){

    string s = "abcde";
    int size = s.size();
    string ans = reverseStr(s, 0, size-1);
    cout << ans << endl;

    return 0;
}