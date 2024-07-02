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
void insertAtTail (Node *&head,Node*&tail,int val){
    Node * newNode = new Node(val);
        if(head==NULL){
           head=newNode;
           tail=newNode;
           return;
        }
        tail->next=newNode;
        tail= newNode;
}
void printLinkList(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        /* code */
        cout << tem->val << " ";
        tem = tem->next;
    }
}


int main()
{

    Node * head= NULL;
    Node * tail = NULL;

    while (true)
    {
        int val;
        cin>>val;
        if(val==-1){
            break;
        }else{
         insertAtTail(head,tail,val);
        }
    
    }
    printLinkList(head);
    

    return 0;
}