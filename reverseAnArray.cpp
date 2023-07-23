#include<iostream>
using namespace std;



int main(){

    int arr[4] = {4, 6, 2, 8};

    int i = 0;
    int j = 4-1;

    while(i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int i=0; i<4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}