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

    int s;
    cin >> s;

    // 1 approach
    // for(int i=0; i<n-2; i++)
    // {
    //     for(int j=i+1; j<n-1; j++)
    //     {
    //         for(int k=j+1; k<n; k++)
    //         {
    //             if(arr[i] + arr[j] + arr[k] == s)
    //             {
    //                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
    //             }
    //         }
    //     }
    // }

    // 2 approach

    sort(arr, arr+n);

    for(int i=0; i<n-2; i++)
    {
        int l = i+1;
        int h = n-1;

        while(l<h)
        {
            if(arr[i] + arr[l] + arr[h] == s)
            {
                cout << arr[i] << " " << arr[l] << " " << arr[h] << endl;
                l++;
                h--;
            }
            else if(arr[i] + arr[l] + arr[h] < s)
            {
                l++;
            }
            else{
                h--;
            }
        }
    }

    return 0;
}