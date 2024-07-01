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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        /* code */
        temp = temp->next;
    }
    // tem akn last node
    temp->next = newNode;
}
void print_linkdList(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    cout << "option 1 insert a tail";
    while (true)
    {
        /* code */
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linkdList(head);
        }
        else if (op == 3)
        {
            cout<<"terminate";
            break;
        }
    }

    cout << head;
    return 0;
}