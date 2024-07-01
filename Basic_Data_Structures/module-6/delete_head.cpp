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
void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        /* code */
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_at_head(Node *head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void delete_from_pos(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        /* code */
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "deleted  positon" << pos;
}
void delete_head(Node *&head)
{
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << "deleted  head";
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
            int pos, v;
            cout << "Inter a position";
            cin >> pos;
            cout << "inter a value";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter your pos";
            cin >> pos;
            if (op == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_pos(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            cout << "terminate";
            break;
        }
    }

    cout << head;
    return 0;
}