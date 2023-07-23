#include<iostream>
using namespace std;

bool checkEqual(int arr1[], int arr2[])
{
    for(int i=0; i<26; i++)
    {
        if(arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

int main(){

    string s1;
    cin >> s1;

    string s2;
    cin >> s2;

    int arr1[26] = {0};
    for(int i=0; i<s1.length(); i++)
    {
        int index = s1[i] - 'a';
        arr1[index]++;
    }

    for(int i=0; i<s2.length(); i++)
    {
        int arr2[26] = {0};
        for(int j=i; j<s1.length(); j++)
        {
            int index = s2[j] - 'a';
            arr2[index]++;
        }
        for(int i=0; i<26; i++)
        {
            cout << arr2[i] << " ";
            
        }
        cout << endl;
        if(checkEqual(arr1, arr2))
        {
            cout << "found" << endl;
            break;
        }
    }

    return 0;
}