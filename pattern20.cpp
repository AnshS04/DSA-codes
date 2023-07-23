#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n)
    {
        //gaps
        int gaps = n-i;
        while(gaps)
        {
            cout<<" ";
            gaps--;
        }

        //nums
        int nums = i;
        int value=1;
        while(nums)
        {
            cout<<value;
            value++;
            nums--;
        }

        //nums2
        int nums2 = i-1;
        int value2 = i-1;
        while(nums2)
        {
            cout<<value2;
            value2--;
            nums2--;
        }
        cout<<endl;
        i++;
    
    }

    return 0;
}