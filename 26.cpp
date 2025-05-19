#include<iostream>
#include <vector>
#include <queue>
using namespace std;
    vector<int>bfsofgraph(int v,vector<int>adj[]){
        int vis[v]={0};
        vis[0]=1;
        queue<int>q;
        q.push(0);
        vector<int>bfs;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);

            for(auto i : adj[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return bfs;
    }
int main(){
int v,e;
cout<<"enter no. of vertices : ";
cin>>v;
cout<<"enter no. of edges : ";
cin>>e;
vector<int>adj[v];
for(int i=0;i<e;i++){
        int x,y;
        cout<<"enter x and y : ";
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
vector<int>result=bfsofgraph(v,adj);
cout << "BFS Traversal starting from node 0: ";
for(int node : result) {
    cout << node << " ";
}
cout << endl;
return 0;
}
