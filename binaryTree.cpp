#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout << "Enter data" << endl;
    int data;
    cin >> data;

    root = new Node(data);

    // base case
    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for right of " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

void buildUsingLevelOrder(Node* &root)
{
    queue<Node*> q;
    cout << "enter data for root" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << "Enter data for left of " << temp -> data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1)
        {
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter data for right of " << temp -> data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1)
        {
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }
    }
}

void levelOrderTraversal(Node* root)
{

    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";

            if(temp -> left)
            {
                q.push(temp -> left);
            }

            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }

    }
}

void reverseLevelOrderTraversal(Node* root)
{
    stack<int> s;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        

        if(temp == NULL)
        {
            
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";

            if(temp -> left)
            {
                q.push(temp -> left);
            }

            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }


        s.push(temp -> data);

        if(temp -> right)
        {
            q.push(temp -> right);
        }

        if(temp -> left)
        {
            q.push(temp -> left);
        }
    
    }

    while(!s.empty())
    {
        int ans = s.top();
        s.pop();
        cout << ans << " ";
    }
}

int main()
{

    Node* root = NULL;

    // root = buildTree(root);
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // reverseLevelOrderTraversal(root);

    buildUsingLevelOrder(root);
    levelOrderTraversal(root);

    return 0;
}