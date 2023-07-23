#include<iostream>
using namespace std;

int pow(int a, int b){

    //base case
    if(b == 1)
        return a;

    int ans = pow(a, b/2);

    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }

}

int main(){

    int a,b;
    cin >> a >> b;

    int ans = pow(a,b);

    cout << ans << endl;

    return 0;
}