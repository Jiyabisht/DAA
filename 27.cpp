#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// BFS function starting from given startNode
vector<int> bfsofgraph(int v, vector<int> adj[], int startNode) {
    int vis[v+1] = {0};
    vis[startNode] = 1;
    queue<int> q;
    q.push(startNode);

    vector<int> bfs;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto i : adj[node]) {
            if (!vis[i]) {
                vis[i] = 1;
                q.push(i);
            }
        }
    }
    return bfs;
}

int main() {
    int v, e;
    cout << "Enter number of vertices: ";
    cin >> v;
    cout << "Enter number of edges: ";
    cin >> e;

    vector<int> adj[v+1];

    for (int i = 0; i < e; i++) {
        int x, y;
        cout << "Enter edge ";
        cin >> x;
        cin>> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int startNode;
    cout << "Enter starting node for BFS: ";
    cin >> startNode;

    vector<int> result = bfsofgraph(v, adj, startNode);

    cout << "BFS Traversal starting from node " << startNode << ": ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
