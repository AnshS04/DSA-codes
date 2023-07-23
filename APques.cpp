#include<iostream>
using namespace std;

int nthTerm(int num)
{
    return ((3*num)+7);
}

int main(){

    int n;
    cin >> n;

    int ans = nthTerm(n);
    cout << ans << endl;

    return 0;
}