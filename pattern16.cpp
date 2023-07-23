#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n)
    {
        int space = n-i;
        int x = 1;
        while(x<=space)
        {
            cout<<" ";
            x++;
        }

        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}