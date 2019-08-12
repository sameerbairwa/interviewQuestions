/*
Next larger element
Given a generic tree and an integer n. Find and return the node with next larger element in the Tree i.e. find a node with value just greater than n.
Return NULL if no node is present with value greater than n.
Input format :

Line 1 : Integer n

Line 2 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Output format : Node with value just greater than n.

Sample Input 1 :
18
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
20
Sample Input 2 :
21
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 2:
30

 */

#include <iostream>
#include "treeNode.h"
#include <queue>
using namespace std;

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of" << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter" << i << "th child of  " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printLevelWise(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<TreeNode<int> *> q;
    q.push(root);
    while (q.size() != 0)
    {
        TreeNode<int> *front = q.front();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            q.push(front->children[i]);
        }
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data;
            if (i < front->children.size() - 1)
            {
                cout << ",";
            }
        }
        q.pop();
        cout << endl;
    }
}

TreeNode<int> *nextLargerElement(TreeNode<int> *root, int n)
{
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode<int> *ans = NULL;
    if (root->data > n)
    {
        ans = root;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *temp = nextLargerElement(root->children[i], n);
        if (temp && !ans)
        {
            ans = temp;
        }
        else if (ans && temp && temp->data < ans->data)
        {
            ans->data = temp->data;
        }
    }
    return ans;
}

int main()
{

    TreeNode<int> *root = takeInputLevelWise();

    //printLevelWise(root);
    int n;
    cin >> n;
    TreeNode<int> *node = nextLargerElement(root, n);
    cout << node->data;
    delete root;
}