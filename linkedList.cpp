#include<iostream>
#include<map>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){

        this -> data = data;
        this -> next = NULL;

    }

    ~Node(){

        int value = this -> data;

        if(this -> next != NULL){

            delete next;
            this -> next = NULL;

        }
        cout << "memory free for node with data " << value << endl;

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
    temp -> next = nodeToInsert;

}

void deleteNode(Node* &tail, Node* &head, int posi){

    if(posi == 1){

        Node* temp = head;
        head = head -> next;
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
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
            
            return;

        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

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

void sort012(Node* head)
{
    Node* temp = head;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    while(temp != NULL)
    {
        if(temp -> data == 0)
        {
            count0++;
        }
        else if(temp -> data == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }

        temp = temp -> next;
    }

    temp = head;
    for(int i=0; i<count0; i++)
    {
        temp -> data = 0;
        temp = temp -> next;
    }

    for(int i=0; i<count1; i++)
    {
        temp -> data = 1;
        temp = temp -> next;
    }

    for(int i=0; i<count2; i++)
    {
        temp -> data = 2;
        temp = temp -> next;
    }
}

Node* removeDupli(Node* head)
{
    if(head == NULL || head -> next == NULL)
        {
            return head;
        }

        map<int, bool> repeated;
        Node* curr = head;

        while(curr -> next != NULL)
        {
            if(curr -> data == curr -> next -> data)
            {
                int value = curr -> data;
                repeated[value] = true;
                curr = curr -> next;
            }
            else
            {
                curr = curr -> next;
            }
        }

        curr = head;
        Node* prev = NULL;
        while(curr != NULL)
        {
            if(repeated[curr -> data] == true)
            {
                Node* nodeToDel = curr;
                prev -> next = curr -> next;
                nodeToDel -> next = NULL;
                delete(nodeToDel);
                prev -> next = curr;
            }
            else
            {
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
}

Node* removeDuplicates(Node *head)
{
    map<int, bool> visited;

    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL)
    {
        int val = curr -> data;
        if(visited[val] == true)
        {
            Node* temp = curr;
            //if(curr -> next != NULL)
            
            curr = curr -> next;
            
            
            prev -> next = temp -> next;
            temp -> next = NULL;
            delete(temp);
        }
        else
        {
            visited[val] = true;
            prev = curr;
            
            //if(curr -> next != NULL)
            
            curr = curr -> next;
            
        }
    }


    return head;
}

int main(){

    //Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = NULL;
    Node* tail = NULL;
   // print(head);

    insertAtHead(tail, head, 2);
    //print(head);

    insertAtHead(tail, head, 1);
    //print(head);

    insertAtTail(tail, head, 3);
    insertAtTail(tail, head, 3);
    //print(head);

    insertAtPosi(tail, head, 5, 4);
    //print(head);

    insertAtPosi(tail, head, 6, 4);
    insertAtPosi(tail, head, 7, 5);
    print(head);

    removeDupli(head);
    print(head);

    //sort012(head);
    //print(head);

    // deleteNode(tail, head, 5);
    // print(head);
    //removeDuplicates(head);
    //print(head);
    //print(head);
    // cout << "head: " << head -> data << endl;
    // cout << "tail: " << tail -> data << endl;

    return 0;
}