#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){

        this -> data = d;
        this -> next = NULL;

    }

    ~Node(){

        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "node deleted w value " << val << endl;

    }

};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;
    }
    else
    {
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }

}

void deleteNode(Node* &tail, int element)
{
    if(tail == NULL)
    {
        cout << "List is already empty" << endl;
    }
    else
    {
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != element)
        {
            prev = curr;
            curr = curr -> next;
        }

        if(curr == prev)
        {
            cout << "memory free of node with data " << curr -> data << endl;
            tail = NULL;
            return;
        }

        prev -> next = curr -> next;
        if(tail == curr)
        {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

int getLength(Node* tail)
{
    if(tail == NULL)
    {
        return 0;
    }
    Node* temp = tail -> next;
    int count = 1;
    while(temp != tail)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}

void print(Node* tail){

    Node* temp = tail;

    if(temp == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    while(temp != tail);
    cout << endl;

}

void splitLL(Node* tail)
{
    Node* temp = tail;
    Node* tail2;
    int m = getLength(tail);
    int n = (m/2) - 1;

    if(m%2 != 0)
    {
        n = n+1;
    }

    for(int i=0; i<n; i++)
    {
        temp = temp -> next;
    }
    tail2 = temp -> next;
    temp -> next = tail;
    print(tail);
    //cout << endl;

    temp = tail2;
    if(m%2 != 0)
    {
        n = n-1;
    }
    for(int i=0; i<n; i++)
    {
        temp = temp -> next;
    }
    temp -> next = tail2;
    print(tail2);
}



int main(){

    Node* tail = NULL;

    insertNode(tail, 1, 5);
    // print(tail);

    insertNode(tail, 5, 3);
    // print(tail);

    insertNode(tail, 3, 7);
    // print(tail);

    insertNode(tail, 7, 9);
    //print(tail);

    insertNode(tail, 5, 6);
    insertNode(tail, 6, 8);
    insertNode(tail, 3, 10);
    print(tail);

    splitLL(tail);
    //cout << getLength(tail);
    // deleteNode(tail, 3);
    // print(tail);

    //cout << "tail " << tail -> data << endl;

    return 0;
}