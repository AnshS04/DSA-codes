#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter the value " << endl;
    cin >> n;
    int ans;

    int num = 1;

    switch(num)
    {
        case 1: ans = n/100;
                cout << "100 rs notes:" << ans << endl;
                n = (n-(ans*100));

        case 2: ans = n/50;
                cout << "50 rs notes:" <<  ans << endl;
                n = (n-(ans*50));

        case 3: ans = n/20;
                cout << "20 rs notes:" <<  ans << endl;
                n = (n-(ans*20));

        case 4: ans = n/1;
                cout << "1 rs notes:" <<  ans << endl;
                n = (n-(ans*1));
    }

    return 0;
}