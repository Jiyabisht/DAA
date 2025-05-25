#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool isbipartite(int v,vector<int>adjlist[]){
    queue<int>q;
    int color[v];
    int node;
    for(int i=0;i<v;i++){
        color[i]=-1;
    }
    for(int start=0;start<v;start++){
        if(color[start]==-1){
            q.push(start);
            color[start]=0;
        }
        while(!q.empty()){
            node=q.front();
            q.pop();  
        }
        for(auto i : adjlist[node]){
            if(color[i]==-1){
                color[i]=!color[node];
                q.push(i);
            }else if(color[i]==color[node]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int v;
    cout<<"enter no. of vertices : ";
    cin>>v;
    int matrix[v][v];
    //input in matrix form
    cout<<"enter adjacency matrix : ";
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cin>>matrix[i][j];
        }
    }
    //adjmatrix to adjlist
    vector<int>adjlist[v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(matrix[i][j]==1){
                adjlist[i].push_back(j);
            }
        }
    }
    if(isbipartite(v,adjlist)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO";
    }
}
