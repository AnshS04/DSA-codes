#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    int val = n;

    while(i<=n)
    {
        int j=1;
        while(j<=val)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        val--;
        i++;
    }

    return 0;
}