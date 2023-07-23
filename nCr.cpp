#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int nCr(int a, int b)
{
    int numerator = factorial(a);

    int denominator = factorial(b)*factorial(a-b);

    int result = numerator/denominator;

    return result;
}

int main(){

    int n, r;
    cin >> n >> r;

    int ans = nCr(n, r);

    cout << ans << endl;

    return 0;
}