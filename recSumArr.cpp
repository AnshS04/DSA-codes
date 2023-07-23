#include<iostream>
using namespace std;

int sumArr(int arr[], int size){

    //base case
    if(size == 1)
        return arr[0];
    int sum = arr[0] + sumArr(arr+1, size-1);
    

    return sum;


}

int main(){

    int arr[6] = {3, 4, 5, 1, 7, 5};
    int size = 6;

    int ans = sumArr(arr, size);
    cout << ans << endl;

    return 0;
}