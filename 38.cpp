#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void dfs(int node,vector<int>adjList[],vector<int>&vis,vector<int>&result){
    vis[node]=1;
    result.push_back(node);
    for(auto i : adjList[node]){
        if(!vis[i]){
            dfs(i,adjList,vis,result);
        }
    }
}

int main(){
    int v;
    cout<<"enter V : ";
    cin>>v;
    int matrix[v][v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>matrix[i][j];
        }
    }
    vector<int>adjList[v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(matrix[i][j]==1){
                adjList[i].push_back(j);
            }
        }
    }
    vector<int>vis(v,0);
    vector<int>result;
    dfs(1,adjList,vis,result);  //starting from 1st node
    cout<<"DFS traversal is as follows ";
    for(auto i : result){
        cout<<i<<" ";
    }
    return 0;
}


//start from any node i want
#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int>& vis, vector<int>& result) {
    vis[node] = 1;
    result.push_back(node);
    for (auto i : adj[node]) {
        if (!vis[i]) {
            dfs(i, adj, vis, result);
        }
    }
}

int main() {
    int v;
    cin >> v;

    int matrix[v][v];

    // Reading adjacency matrix
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            cin >> matrix[i][j];
        }
    }

    // Converting matrix to adjacency list
    vector<int> adjList[v];
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            if (matrix[i][j] == 1) {
                adjList[i].push_back(j);
            }
        }
    }

    int startNode;
    cin >> startNode;  // ⬅️ User input: starting node for DFS

    vector<int> vis(v, 0);
    vector<int> result;

    dfs(startNode, adjList, vis, result);  // DFS from user-given node

    cout << "DFS Traversal: ";
    for (auto t : result) {
        cout << t << " ";
    }
    cout << endl;

    return 0;
}
