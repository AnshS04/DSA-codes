#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    // int value2 = n;

    while(i<=n)
    {
        //nums1
        int nums1 = n-i+1;
        int value1 = 1;
        while(nums1)
        {
            cout<<value1;
            value1++;
            nums1--;
        }

        //stars
        int stars = (i-1)*2;
        while(stars)
        {
            cout<<"*";
            stars--;
        }

        //nums2
        int nums2 = n-i+1;
        int value2 = n-i+1;
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