#include<iostream>
using namespace std;

int addDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n%9 == 0)
    {
        return 9;
    }
    else{
        return n%9;
    }
}

int main()
{

    int n;
    cin >> n;

    cout << addDigits(n) << endl;

    return 0;
}