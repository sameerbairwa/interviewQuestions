/*
Given a stack, sort the elements inside that stack in ascending order using only push and pop operation. You can use one additional stack only.
For eg.

Input Stack :  5 (top)
               4
               3
               2
               1
Output Stack : 1 (top)
               2
               3
               4
               5
 */

#include<iostream>
#include <stack>
using namespace std;

void sortStack(stack<int> &s)
{
    // Write your code here

    stack<int> tempStack;
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        while (!tempStack.empty() && tempStack.top() > temp)
        {
            s.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }
    while (!tempStack.empty())
    {
        s.push(tempStack.top());
        tempStack.pop();
    }
}
int main(){
    stack<int> s;
    int n;
    cin >> n;
    while (n)
    {
        int i;
        cin >>i;
        s.push(i);
        n--; 
    }
    sortStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}
