#include<iostream>
using namespace std;

bool isPossible(int arr[], int m, int n, int mid)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > mid)
        {
            sum += arr[i] - mid;
        }
        
    }
    if(sum >= m)
    {
        return true;
    }

    return false;
}

int main()
{

    int n = 5;
    int m = 20;

    int arr[5] = {4, 42, 40, 26, 46};

    int s = 0;
    int maxi = -1;

    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    int e = maxi;

    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e)
    {
        if(isPossible(arr, m, n, mid))
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    cout << ans;
    return 0;
}