#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr1[5] = {1, 3, 4, 7, 9};
    int arr2[3] = {2, 4, 6};

    vector<int> v;

    int i=0;
    int j=0;

    while(i<5 && j!=3)
    {
        if(arr1[i]<arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
        if(arr1[i]>arr2[j])
        {
            v.push_back(arr2[j]);
            j++;
        }
        if(arr1[i] == arr2[j])
        {
            v.push_back(arr1[i]);
            v.push_back(arr2[j]);
            i++;
            j++;
        }

    }

    if(j == 3)
    {
        v.push_back(arr1[i]);
        i++;
    }

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}