#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    int V; 
    vector<vector<int>> adj;

    Graph(int v) {
        V = v;
        adj.resize(v);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // because undirected
    }

    bool dfs(int node, int parent, vector<bool>& visited) {
        visited[node] = true;

        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                if (dfs(neigh, node, visited)) return true;
            }
            else if (neigh != parent) {

                return true;
            }
        }
        return false;
    }

    bool containsCycle() {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (dfs(i, -1, visited)) return true;
            }
        }
        return false;
    }
};

int main() {
    int V = 5;
    Graph g(V);

    vector<pair<int,int>> edges = {{0,1}, {1,2}, {2,3}, {3,4}, {4,0}};

    for (auto &e : edges) g.addEdge(e.first, e.second);

    cout << (g.containsCycle() ? "true" : "false") << endl;
    return 0;
}
