#include<iostream>
#include<math.h>
using namespace std;

// int decToBin(int n)
// {
//     int ans = 0;
//     int i=0;

//     while(n!=0)
//     {
//         int bit = n&1;
//         ans = (bit*pow(10,i)) + ans;
//         n = n>>1;
//         i++;
//     }
//     return ans;
// }

int setBits(int n)
{
    int count = 0;

    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        
        
        n = n >> 1; 
    }
    return count;
}

int main(){

    int a, b;
    cin >> a >> b;

    

    int ans1 = setBits(a);
    int ans2 = setBits(b);

    int result = ans1 + ans2;
    cout << result << endl;

    return 0;
}