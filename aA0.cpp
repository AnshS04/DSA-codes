#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    int ascii = ch;

    if(ascii>=97 && ascii<=122)
    {
        cout<<"lowercase"<<endl;
    }
    else if(ascii>=65 && ascii<=90)
    {
        cout<<"uppercase"<<endl;
    }
    else if(ascii>=48 && ascii<=57)
    {
        cout<<"number"<<endl;
    }
    else
    {
        cout<<"error"<<endl;
    }
}