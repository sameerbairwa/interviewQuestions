#include <iostream>
#include "treeNode.h" // tree class
#include <queue>
#include <bits/stdc++.h>
#include <unordered_map>
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
void helper(TreeNode<int> *root, int x, unordered_map<int, int> &map)
{

    for (int i = 0; i < root->numChildren(); i++)
    {
        helper(root->getChild(i), x + 1, map);
    }
    map[x]++;
}

int maxLevel(TreeNode<int> *root)
{

    if (root == NULL)
    {
        return 0;
    }
    unordered_map<int, int> map;
    helper(root, 0, map);
    int max = -1;
    int level = -1;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        //cout << it->first << " "  << it->second << " ";
        if (it->second > max)
        {
            level = it->first;
            max = it->second;
        }
    }

    return level;
}

int main()
{

    TreeNode<int> *root = takeInputLevelWise();

    //printLevelWise(root);
    int result = maxLevel(root);
    cout << result;
    

    delete root;
}