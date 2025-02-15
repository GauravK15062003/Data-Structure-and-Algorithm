#include<iostream>
#include<vector>
using namespace std;


int main() {
    int n, m;
    cout<<"Enter no. of vertices and edges: "<<endl;
    cin>>n>>m;
    // int adj[n+1][m+1];
    vector<vector<int>> adj(m, vector<int> (n+1, 0));
    cout<<"Enter edges here..."<<endl;
    for(int i=0;i<m;i++) {
        int u, v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<=n;j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
}