#include<iostream>
using namespace std;

// // 1 approach
// void reverseArr(int arr[], int n)
// {
//     for(int i=n-1; i>=0; i--)
//     {
//         cout << arr[i] << " ";
//     }
// }

//2 approach
void reverseArr(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    reverseArr(arr, n);
    printArr(arr, n);

    return 0;
}