#include <iostream>
#include <queue>
using namespace std;
bool hasPath(int **edges, int start, int end, int n)
{
    queue<int> q;
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    q.push(start);
    visited[start] = true;
    while (q.size() != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (edges[q.front()][i])
            {
                if (visited[i] != true)
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
        if (q.front() == end)
        {
            return true;
        }
        q.pop();
    }

    return false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    int start, end;

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    cin >> start >> end;
    if (hasPath(edges, start, end, n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
