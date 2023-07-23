#include<iostream>
using namespace std;

int main(){

    int arr[20];

    // 1 approach
    fill_n(arr, 20, 1);

    //2 approach
    for(int i=0; i<20; i++)
    {
        arr[i] = 2;
    }

    for(int i=0; i<20; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}