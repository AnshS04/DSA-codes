#include<iostream>
using namespace std;

// for printing nth fibo term
int fibo(int n)
{
    int a = 0;
    int b = 1;
    // cout << a << " " << b ;
    int c;

    for(int i=2; i<n; i++)
    {
        c = a+b;
        // cout<<" "<<c;
        a = b;
        b = c;
    }
    return c;
}

int main()
{

    int n;
    cin>>n;

    cout << fibo(n) << endl;

    return 0;
}