#include<iostream>
using namespace std;

bool linSearch(int arr[], int size, int key){

    //base case
    if(size == 0)
        return false;

    if(arr[0] == key)
    {
        return true;
    }
    else{
        bool remainingPart = linSearch(arr+1, size-1, key);
        return remainingPart;
    }

}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 5;

    int ans = linSearch(arr, size, key);

    if(ans){
        cout << "Present";
    }
    else{
        cout << "Absent";
    }

    return 0;
}