#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=10;
    int m = 4;
    int k=3;
    int Checkpoints[m] = {2, 4, 6, 8};
    int on=0;
    int prev = 0;

    for(int i=1; i<=n; i++)
    {
        int s = prev;
        int e = m-1;

        int index = -1;

        while(s<=e)
        {
            int mid = s + (e-s)/2;

            if((i+k) >= Checkpoints[mid])
            {
                s = mid+1;
                index = mid;
            }
            else{
                e = mid-1;
            }
        }
        if(index == -1)
        {
            return -1;
        }
        on++;
        i = Checkpoints[index] + k;
        prev = index+1;
    }
    return on;

    return 0;
}