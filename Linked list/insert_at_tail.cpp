#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_link_list(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1 Insert Tail:" << endl;
        cout << "Print Value 2 :" << endl;
        cout << "Option 3 Break Program:" << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Please Enter your vale:";
            int val;
            cin >> val;

            insert_at_tail(head, val);
        }
        else if (opt == 2)
        {
            print_link_list(head);
        }
        else if (opt == 3)
        {
            break;
        }
    }

    return 0;
}