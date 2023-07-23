#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
    // base case
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    //base case 2
    if(arr[mid] == key)
        return true;

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
        
}

int main(){

    int arr[9] = {1,2,3,4,5,6,7,8,9,};
    int size = 9;
    int key = 10;

    int ans = binarySearch(arr, 0, size-1, key);

    if(ans){
        cout << "Present";
    }
    else{
        cout << "Not Present";
    }

    return 0;
}