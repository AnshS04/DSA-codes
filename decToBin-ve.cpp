#include<iostream>
#include<math.h>
#include<bitset>

using namespace std;

//1st approach
int main()
{

    int n;
    cin>>n;
    
    int ans = 0;
    int i = 0;
    
    int temp = (-1*n);
        

    while(temp!=0)
    {
        int bit = temp&1;
        ans = (bit*pow(10,i)) + ans;
        temp = temp>>1;
        i++;
    }
    cout<<ans<<endl;

     // 1's comp
    int newAns = (~ans);
    // 2's comp
    newAns = newAns+1;
    cout << newAns << endl;

    return 0;
}

//2nd approach

int main()
{
    int n;
    cin>>n;

    bitset<16> x(n);

    cout<<"Binary of given number is "<<x<<endl; 
}




















    // cout<< ans << endl;
    // char bin = static_cast<char>(ans);
    // char one;
    // char two;
    // int x;
    // int len = lengthof(bin);
    // cout<<len<<endl;

    

    // string s = to_string(ans);
    // int lenOfbin = s.length();
    // // cout<<lenOfbin;
    // string ones, twos;
    // ones = twos = "";
    

    // for (int x = 0; x < lenOfbin; x++)
    // {
    //     if(s[x] == '1')
    //     {
    //         ones += '0';
    //     }
    //     else
    //     {
    //         ones += '1';
    //     }
            
    // }

    // int carry = 1;
    // for(int x=lenOfbin; x>=0; x--)
    // {
    //     if(ones[x] == '1' && carry == 1)
    //     {
    //         twos += '0';
    //     }
    //     else if(ones[x] == '0' && carry == 1)
    //     {
    //         twos += '1';
    //         carry = 0;
    //     }
    //     else{
    //         twos = ones;
    //     }
    // }

    // cout << twos << endl;
        




// #include<iostream>
// #include <math.h>
// using namespace std;

// int decimalToBinary(int n){
//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n&1; 
//         ans = (bit * pow(10,i)) + ans;
//         n = n >> 1;
//         i++;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin >> n;

//     if(n<0){
//         // if number is negative
//         n = n*(-1);
//         int ans = decimalToBinary(n);
//     // Find 2's compliment of the number
    // 1's comp
    // int newAns = (~ans);
    // // 2's comp
    // newAns = newAns+1;
    // cout << newAns << endl;

//     } else {
//         // if number is positive 
//         int ans = decimalToBinary(n);
//         cout << ans << endl;
//     }
// }