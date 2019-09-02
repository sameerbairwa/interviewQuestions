#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

node *takeInput1()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
        cin >> data;
    }
    return head;
}

node *takeInput2()
{
    cout << "Enter Elements of linked list, -1 after last element : " << endl;
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
int length(node *head)
{
    int len = 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        len++;
        ptr = ptr->next;
    }

    return len;
}

int main()
{
        node *head = NULL;
        head = takeInput2();
        cout << " Length of Linked List "<<  length(head);
        return 0;
}