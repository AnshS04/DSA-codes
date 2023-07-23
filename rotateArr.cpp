#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        v.push_back(arr[i]);
    }

    int i=0;

    while(i<n)
    {
        int j = i+k;
        if(j<n)
        {
            swap(arr[j], v[i]);
            i++;
        }
        else{
            j = j%n;
            swap(arr[j], v[i]);
            i++;
        }
        
    }

    // int j=0;
    // while(i<n)
    // {
    //     swap(arr[j], v[i]);
    //     j++;
    //     i++;
    // }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}