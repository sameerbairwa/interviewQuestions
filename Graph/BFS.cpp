#include <iostream>
#include <queue>
using namespace std;

void BFS(int **edges, int n, int start, bool *visited)
{
    queue<int> q;
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
        cout << q.front() << " ";
        q.pop();
    }
    delete[] visited;
}
int main()
{
    int n;
    int e;
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

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    BFS(edges, n, 0, visited);
    return 0;
}