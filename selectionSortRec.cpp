#include<iostream>
using namespace std;

void selectionSort(int arr[], int i, int n)
{
    //base case
    if(i>n)
        return;
        
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[minIdx], arr[i]);

        selectionSort(arr, i+1, n);
}


int main(){

    int arr[5] = {6,1,2,5,3};

    selectionSort(arr, 0, 5);

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}