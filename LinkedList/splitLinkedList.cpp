/*Write a function that takes one list and divides up its nodes to create two smaller lists A and B. The sub lists should be made from alternating elements in the original list.
Sample Input :
 8 2 5 9 1 4 3 7 -1
Note : -1 at the end of input is just a terminator representing the end of linked list. This -1 is not part of the linked list. Size of given linked list is 8.
Sample Output :
 3 1 5 8
 7 4 9 2
*/
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
void AlternatingSplit(node *head)
{
    // Write your code here
    node *head1 = NULL;
    node *head2 = NULL;
    int i = 0;
    while (head != NULL)
    {
        node *newnode = new node(head->data);
        if (i % 2 == 0)
        {
            if (head1 == NULL)
            {
                head1 = newnode;
            }
            else
            {
                newnode->next = head1;
                head1 = newnode;
            }
        }
        else
        {
            if (head2 == NULL)
            {
                head2 = newnode;
            }
            else
            {
                newnode->next = head2;
                head2 = newnode;
            }
        }
        head = head->next;
        i++;
    }
    while (head1)
    {
        cout << head1->data << " ";
        head1 = head1->next;
    }
    cout << endl;
    while (head2)
    {
        cout << head2->data << " ";
        head2 = head2->next;
    }
}

int main()
{
    node *head = NULL;
    head = takeInput2();
    AlternatingSplit(head);
    return 0;
}

