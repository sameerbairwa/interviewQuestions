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
node *deletenode(node *head, int i)
{
    node *preptr;
    node *ptr = head;
    int c = 0;
    if (i == 0)
    {
        head = ptr->next;
    }
    else
    {
        preptr = ptr;
        while (c != i)
        {
            c++;
            preptr = ptr;
            ptr = ptr->next;
        }
        if (ptr != NULL && ptr->next != NULL)
        {
            preptr->next = ptr->next;
        }
        else
        {
            preptr->next = NULL;
        }
        //free(preptr);
        free(ptr);
    }

    return head;
}

void print(node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty ";
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = NULL;
    head = takeInput2();
    cout << "Enter position of node : " << endl;
    int position;
    cin >> position;
    head = deletenode(head , position);
    print(head);
    return 0;
}

/*
Given a linked list and a position i, delete the node of ith position from Linked List recursively.
If position i is greater than length of LL, then you should return the same LL without any change.
Indexing starts from 0. You don't need to print the elements, just delete the node and return the head of updated LL.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer i (position)
Output format :
Updated LL elements (separated by space)
Sample Input 1 :
3 4 5 2 6 1 9 -1
3
Sample Output 1 :
3 4 5 6 1 9
Sample Input 2 :
3 4 5 2 6 1 9 -1
0
Sample Output 2 :
4 5 2 6 1 9
*/