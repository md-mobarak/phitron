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
void printLinkList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
        /* code */
        cout << endl;
    }
};

void insertLinkList(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {

        temp = temp->next;
    }
    // cout<<temp->val<<" ";

    newNode->next = temp->next;
    temp->next = newNode;
}

void headInsert(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insertTail(Node *&head,Node*&tail,int val){
    Node * newNode = new Node(val);
       if(head==NULL){
         head=newNode;
         tail=newNode;
         return;
       }
       tail->next= newNode;
       tail= newNode;
}

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        /* code */
        count++;
        temp = temp->next;
    }
    return count;
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
    //  insertLinkList(head,2,200);

    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "invalid position " << pos << endl;
    }
    else if (pos == 0)
    {
        headInsert(head, val);
    }else if(pos==size(head)){
        insertTail(head,tail,val);
    }

    else
    {
        insertLinkList(head, pos, val);
    }
    printLinkList(head);
    return 0;
}