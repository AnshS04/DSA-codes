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

    sort(arr, arr+n);


//     int i=0;
   
//    int k=n-1;
//    int j= (i+k)/2;

//    while(j<=k)
//    {
//       if(arr[i] == 0)
//       {
//          i++;
//       }
//       else if(arr[k] == 2)
//       {
//          k--;
//       }
//       else if(arr[i] == 2 && arr[k] == 0)
//       {
//          swap(arr[i], arr[k]);
//       }
//       else if(arr[j] == 1)
//       {
//          j++;
//       }
//       else if(arr[j] == 0 && arr[i] == 1||2)
//       {
//          swap(arr[j], arr[i]);
//       }
//       else
//       {
//          swap(arr[j], arr[k]);
//       }
//    }

   for(int p=0; p<n; p++)
   {
    cout << arr[p] << " ";
   }

    return 0;
}
