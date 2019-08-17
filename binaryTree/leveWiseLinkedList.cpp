#include <iostream>
#include "binaryTreeNode.h"
#include <queue>
using namespace std;
template <typename T>
class node
{
public:
    T data;
    node<T> *next;
    node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

BinaryTreeNode<int> *takeInputLevelWise()
{
    int data;
    cout << "Enter data" << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(data);

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        cout << pendingNodes.front()->data << ":";
        if (pendingNodes.front()->left != NULL)
        {
            pendingNodes.push(pendingNodes.front()->left);
            cout << "L:" << pendingNodes.front()->left->data;
        }
        else
        {
            cout << "L:" << -1;
        }
        if (pendingNodes.front()->right != NULL)
        {
            pendingNodes.push(pendingNodes.front()->right);
            cout << ",R:" << pendingNodes.front()->right->data;
        }
        else
        {
            cout << ",R:" << -1;
        }
        cout << endl;
        pendingNodes.pop();
    }
}

vector<node<int> *> createLLForEachLevel(BinaryTreeNode<int> *root)
{
    // Write your code here
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    vector<node<int> *> v;
    node<int> *head = NULL;
    node<int> *tail = head;

    while (!q.empty())
    {
        BinaryTreeNode<int> *current = q.front();
        q.pop();
        if (current != NULL)
        {
            if (current->left != NULL)
            {
                q.push(current->left);
            }

            if (current->right != NULL)
            {
                q.push(current->right);
            }
            node<int> *newnode = new node<int>(current->data);
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
        }
        if (current == NULL)
        {
            v.push_back(head);
            head = NULL;
            tail = NULL;
            if (q.size() == 0)
                break;
            q.push(NULL);
        }
    }

    return v;
}

// input: 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();

    
    //printLevelWise(root);
    delete root;
}