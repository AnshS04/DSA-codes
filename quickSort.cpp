#include<iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i]<pivot)
        {
            count++;
        }
    }

    int pivotIndex = count + s;
    swap(arr[s], arr[pivotIndex]);

    int i=0;
    int j=e;
    
    while(i < pivotIndex && j > pivotIndex)
    {
        if(arr[i] < pivot)
            i++;
        
        else if(arr[j] > pivot)
            j--;
        
        else
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    //base case
    if(s>=e)
        return;

    int p = partition(arr, s, e);

    quickSort(arr, s, p);
    quickSort(arr, p+1, e);
}

int main()
{

    int arr[5] = {9,5,7,2,54};
    int n = 5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}