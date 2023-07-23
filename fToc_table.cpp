#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=0;

    while(i<=n)
    {
        cout<<((i-32)*0.555)<<endl;
        i = i+5;
    }

    return 0;
}