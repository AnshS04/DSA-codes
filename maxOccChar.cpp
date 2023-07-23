#include<iostream>
using namespace std;

char getMaxOccChar(string s)
{
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 'a' || s[i] <= 'z')
        {
            int n = s[i] - 'a';
            arr[n]++;
        }
        else{
            int n = s[i] - 'A';
            arr[n]++;
        }
    }
}

int main(){

    string s;
    cin >> s;


    return 0;
}