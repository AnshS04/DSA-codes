#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    char ch = 'A';

    while(i<=n)
    {
        
        int j=1;
        char value = ch;
        while(j<=n)
        {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }

    return 0;
}