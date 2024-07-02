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
    Node *tem = head;
    while (tem != NULL)
    {
        /* code */
        cout << tem->val << " ";
        tem = tem->next;
    }
}
void deleteVal(Node *&head, int pos)
{
    Node *tem = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        /* code */
        tem = tem->next;
    }
    Node *deleteNode = tem->next;
    tem->next = tem->next->next;
    delete deleteNode;
}
int sizeOfNode(Node *head)
{
    Node *tem = head;
    int count = 0;
    while (tem != NULL)
    {
        /* code */
        count++;
        tem = tem->next;
    }
    return count;
}
void deleteHead  (Node *&head){
   Node * deleteNode = head;
   head=head->next;
   delete deleteNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->next = tail;
    int pos = 2;
    //   printLinkList(head);
    if (pos >= sizeOfNode(head))
    {
        cout << "invalid";
        // return;
    }else if(pos==0){
        deleteHead(head);
    }
    else
    {
        deleteVal(head, pos);
        cout<<"deleted position";
    }
    // printLinkList(head);
    return 0;
}