#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {3, 7, 9, 16};
    vector<int> queries = {2, 1};
    int n = 4;
    int q = 2;
    int ans = arr[0];
    vector<int> answer;
    int store;
    
    for(int i=0; i<q; i++)
    {
        if(ans>=queries[i])
        {
            store = 1;
        }
        int j=1;
        while(j<n)
        {
            ans = ans&arr[j];
            
            if(ans>=queries[i])
            {
                store++;
                // answer.push_back(j+1);
                // break;
            }
            j++;
        }
        answer.push_back(store);
    }

    for(int i=0; i<answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}