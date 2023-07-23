#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("ansh");
    q.push("sach");
    q.push("deva");

    cout << q.front() << endl;

    return 0;
}