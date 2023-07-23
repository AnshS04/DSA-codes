#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    

    while(i<=n)
    {
        int value = i;
        //gaps
        int gaps = i-1;
        while(gaps)
        {
            cout<<" ";
            gaps--;
        }

        //nums
        int nums = n-i+1;
        while(nums)
        {
            cout<<value;
            value++;
            nums--;
        }
        cout<<endl;
        i++;

        
    }

    return 0;
}