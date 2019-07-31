/*
Given a string expression which consists only ‘}’ and ‘{‘. The expression may not be balanced. You need to find the minimum number of bracket reversals which are required to make the expression balanced.
Return -1 if the given expression can't be balanced.
Input Format :
String S
Output Format :
Required count
Sample Input 1 :
{{{
Sample Output 1 :
-1
Sample Input 2 :
{{{{}}
Sample Output 2 :
1
 */

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int countBracketReversals(string input)
{
    // Write your code here
    int len = input.length();

    if (len % 2 != 0)
        return -1;

    stack<char> s;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == '}' && !s.empty())
        {
            if (s.top() == '{')
                s.pop();
            else
                s.push(input[i]);
        }
        else
            s.push(input[i]);
    }

    int red_len = s.size();

    int n = 0;
    while (!s.empty() && s.top() == '{')
    {
        s.pop();
        n++;
    }
    return (red_len / 2 + n % 2);
}

int main(){
    string s;
    cin >> s;
    cout << countBracketReversals(s);
}