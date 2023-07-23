#include<iostream>
#include<string>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

 string reverseAns(string ans)
    {
        int s = 0;
        int e = ans.size() - 1;

        while(s<e)
        {
            swap(ans[s++], ans[e--]);
        }
        return ans;
    }

  string reverseWords(string s) {
        string ans = "";
        string result = "";
        string empty = " ";
        for(int i=s.size()-1; i>=0; i--)
        {
            if((isspace(s[i])) || (i == 0))
            {
                reverseAns(ans);
                result.insert(i,ans);
                result.insert(ans.size()+1,empty);
                ans.clear();
            }
            else
            {
                ans.push_back(s[i]);
            }

            
        }
        return result;
    }

int main(){

    string s = "the sky is blue";
    // string ex;
    // string yg = "";
    // yg = yg + 

    int n = s.size();
    int low = 0;
    int high = n-1;
    string ans;
    string result="";

    while(low<high)
    {
        swap(s[low++], s[high--]);
    }

    for(int i=0; i<n; i++)
    {
        int ch = s[i];
        while(ch != 32)
        {
            ans.push_back(s[i]);
        }
        reverse(ans.begin(), ans.end());
        ans.push_back(s[i]);
        result = result+ans;
        ans.clear();
    }
    cout << result << endl;
   

    // int count = 0;


    // for(int i=0; i<s.size(); i++)
    // {
    //     if(isspace(s[i]))
    //     {
    //         count++;
    //     }
    // }
    // cout << count << endl;
    // cout << reverseWords(s);

    return 0;
}