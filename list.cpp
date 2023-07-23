#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;

    l.push_back(2);
    l.push_front(1);

    for(int i:l)
    {
        cout << i << " ";
    }

    l.erase(l.begin());

    cout << "after erasing" << endl;

    for(int i:l)
    {
        cout << i << " ";
    }

    return 0;
}