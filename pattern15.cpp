#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    char ch = 'A';

    while(i<=n)
    {
        char value = ch + n - i;
        int j=1;
        while(j<=i)
        {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}