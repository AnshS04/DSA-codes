#include<iostream>
#include<math.h>
using namespace std;

int fact(int n, int m)
{
    int ans = 1;
    for(int i=1; i<=n; i++)
    {
        ans = (1LL * (ans)%m * (i)%m)%m;
    }
    return ans%m;
}

int main(){

    long m = pow(10, 9);

    int n;
    cin >> n;

    cout << fact(n,m) << endl;

    return 0;
}