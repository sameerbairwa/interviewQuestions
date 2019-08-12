/*
Node having sum of children and node is max
Given a tree, find and return the node for which sum of data of all children and the node itself is maximum. In the sum, data of node itself and data of immediate children is to be taken.
Input format :

Line 1 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Output format : Node with maximum sum.

Sample Input 1 :
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
Sample Output 1 :
1

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

TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
    // Write your code here
    if (root == NULL)
    {
        return NULL;
    }
    TreeNode<int> *ans = root;
    int sum = root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        sum += root->children[i]->data;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *temp = maxSumNode(root->children[i]);
        int tempSum = temp->data;
        for (int i = 0; i < temp->children.size(); i++)
        {
            tempSum += temp->children[i]->data;
        }
        if (tempSum > sum)
        {
            sum = tempSum;
            ans = temp;
        }
    }
    return ans;
}

int main()
{

    TreeNode<int> *root = takeInputLevelWise();

    //printLevelWise(root);
    TreeNode<int> *node =  maxSumNode(root);
    cout << node->data;
    delete root;
}