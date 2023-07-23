#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "the sky is blue";
    string ch = " ";

    reverse(s.begin(), s.end());

    int n = s.size();
    string temp;
    for(int i=0; i<n; i++)
    {
        temp.push_back(s[i]);
    }
    string ans;
    string result = "";
    for(int i=0; i<temp.size()+1; i++)
    {
        if(temp[i] == '\0')
        {
            reverse(ans.begin(), ans.end());
            result = result + ans;
            break;
        }
        if(isspace(temp[i]))
        {
            reverse(ans.begin(), ans.end());
            result = result + ans + ch;
            ans.clear(); 
        }

        if((temp[i] >= 'a' && temp[i] <= 'z') || (temp[i] >= 'A' && temp[i] <= 'Z'))
            ans.push_back(temp[i]);
    }
    
    
    cout << result;


    return 0;
}