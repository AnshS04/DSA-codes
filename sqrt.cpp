#include<iostream>
using namespace std;

double morePrecision(int n, int k, int tempSol)
{
    double ans = tempSol;
    double factor = 1;

    for(int i=0; i<k; i++)
    {
        factor = factor/10;
        for(double j = ans; j*j<n; j = j+factor)
        {
            ans = j;
        }
    }
    return ans;
    
}

int main(){
    cout << morePrecision(37, 10, 6);
    return 0;
}