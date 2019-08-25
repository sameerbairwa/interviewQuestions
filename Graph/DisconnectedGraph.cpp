#include <iostream>
#include <queue>
using namespace std;
void printDFS(int **edges, int n, int start, bool *visited)
{
    cout << start << endl;
    visited[start] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == start)
        {
            continue;
        }
        if (edges[start][i] == 1)
        {
            if (visited[i])
            {
                continue;
            }
            printDFS(edges, n, i, visited);
        }
    }
}

void DFS(int** edges, int n){
    bool* visited = new bool[n];
    for(int i=0; i<n; i++){
        visited[i] = false;
    }
    for(int i=0; i<n; i++){
        if(!visited[i]){
            printDFS(edges,n,i,visited);
        }
    }
    delete [] visited;

}

void printBFS(int **edges, int n, int start, bool *visited)
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
}
void BFS(int **edges, int n)
{
    bool* visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            printBFS(edges, n, i, visited);
        }
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
    cout << "DFS " << endl;
    DFS(edges, n);
    cout << "BFS" << endl;
    BFS(edges, n);
    // delete all the memory
    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
}