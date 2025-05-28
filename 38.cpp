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
    dfs(1,adjList,vis,result);
    cout<<"DFS traversal is as follows ";
    for(auto i : result){
        cout<<i<<" ";
    }
    return 0;
}
