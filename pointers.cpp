#include<iostream>
using namespace std;

int main(){

    int n = 5;
    cout << &n << endl;

    int *ptr = &n;
    cout << *ptr << endl;
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}