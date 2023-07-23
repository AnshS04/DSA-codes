#include<iostream>
using namespace std;

class Stack
{
    public:
        int *arr;
        int size;
        int top;

    Stack(int size)
    {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(top < size-1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
};

int main(){

    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //st.push(60);


    return 0;
}