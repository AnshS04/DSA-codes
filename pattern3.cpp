#include<iostream>
using namespace std;

int main(){

    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4 pattern   (for revere, put n-j+1 instead of j in cout)

    int n;
    cin>>n;

    int temp = n;

    int i = 1;

    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}