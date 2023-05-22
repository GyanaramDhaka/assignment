#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;
class Graph
{
public:
    int v;
    vector<list<int>> adj;
    vector<bool> visited;
    Graph(int v)
    {
        this->v = v;
        adj.resize(v);
        visited.resize(v, false);
    }
    void insertedge(int u, int v)
    {
        this->adj[u].push_back(v);
    }
    void dfs(int v)
    {
        visited[v] = true;
        cout << v << "  ";
        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); i++)
        {
            if (!visited[*i])
            {
                dfs(*i);
            }
        }
    }
    void bfs(int v)
    {
        visited.resize(v, false);
        list<int> queue;
        visited[v] = true;
        queue.push_back(v);
        while (!queue.empty())
        {
            v = queue.front();
            cout << v << " ";
            queue.pop_front();
            for (auto aj : adj[v])
            {
                if (!visited[aj])
                {
                    queue.push_back(aj);
                }
            }
        }
    }
};
int main()
{
    int x;
    int u, v, noofedge;
    cout << "enter limit" << endl;
    cin >> x;
    Graph *G = new Graph(x);
    
    cout << "no. of edges ==  ";
    cin >> noofedge;
    for (int i = 0; i < noofedge; i++)
    {
        cin >> u;
        cin >> v;
        G->insertedge(u, v);
    }
    int start;
    cout << "enter start " << endl;
    cin >> start;
    G->dfs(start);
    cout << "enter start " << endl;
    cin >> start;
    G->bfs(start);
    return 0;
}