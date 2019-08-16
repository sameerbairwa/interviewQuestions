#include <iostream>
#include "binaryTreeNode.h"
#include <queue>
//#include <bits/stdc++.h>
using namespace std;

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
int height(BinaryTreeNode<int>*root){
    if(root ==NULL){
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}

int diameter(BinaryTreeNode<int>*root){
    if(root == NULL){
        return 0;
    }
    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(option1, option2, option3); 
}


// input: 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();

    //cout << "Number of nodes : " << numNodes(root) << endl;

    //printLevelWise(root);
    delete root;
}