#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){

        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;

    }

    ~Node(){

        int val = this -> data;
        if(next != NULL){

            delete next;
            next = NULL;

        }

        cout << "memory free for node with value " << val << endl;

    }

};

void insertAtHead(Node* &tail, Node* &head, int d){

    if(head == NULL){

        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }
    else{

        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;

    }

}

void insertAtTail(Node* &tail, Node* &head, int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{

        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;

    }

}

void insertAtPosi(Node* &tail, Node* &head, int posi, int d){

    if(posi == 1){

        insertAtHead(tail, head, d);
        return;

    }

    Node* temp = head;
    int count = 1;

    while(count != posi-1){

        temp = temp -> next;
        count++;

    }

    if(temp -> next == NULL){

        insertAtTail(tail, head, d);
        return;

    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void deleteNode(Node* &tail, Node* &head, int posi){

    if(posi == 1){

        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

    }
    else{

        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count != posi){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        if(curr -> next == NULL){

            tail = prev;
            //curr -> next -> prev = prev;
            prev -> next = curr -> next;
            curr -> prev = NULL;
            curr -> next = NULL;
            delete curr;

        }
        else{
            curr -> next -> prev = prev;
      
            prev -> next = curr -> next;
            curr -> prev = NULL;
            curr -> next = NULL;
            delete curr;
        }
        
        

    }

}

void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){

        cout << temp -> data << " ";
        temp = temp -> next;

    }
    cout << endl;

}

int getLength(Node* head){

    int len = 0;
    Node* temp = head;

    while(temp != NULL){

        len++;
        temp = temp -> next;

    }
    return len;

}


int main(){

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    //print(head);
    
    //cout << getLength(head) << endl;

    insertAtHead(tail, head, 12);
    print(head);

    insertAtHead(tail, head, 18);
    print(head);

    insertAtTail(tail, head, 14);
    print(head);

    insertAtTail(tail, head, 20);
    print(head);

    insertAtPosi(tail, head, 5, 16);
    print(head);

    deleteNode(tail, head, 5);
    print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;

    return 0;

}