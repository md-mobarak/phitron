#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void printRecursive (Node *head){
    Node * tem= head;
    if(tem->next ==NULL) return;
     tem= tem->next;
     printRecursive(tem);
     cout<<tem->val<<" "<<endl;
}


int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;
printRecursive(head);
    return 0;
}