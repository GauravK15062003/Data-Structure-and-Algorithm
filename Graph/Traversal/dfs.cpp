#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir) {
        graph[dest].push_back(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto ele : graph[i]) {
            cout<<ele<<" , ";
        }
        cout<<"\n";
    }
}

void dfs_rec(int node, vector<int>& visited, vector<int>& dfs){
    visited[node] = 1;
    dfs.push_back(node);
    //traverse the adjacent or neighbour node of given node
    for(auto lt : graph[node]) {
        if(!visited[lt]) dfs_rec(lt, visited, dfs);
    }
}

vector<int> dfsOfGraph(int start) {
    vector<int> visited(v, 0);
    vector<int> dfs; // to store the dfs traversal
    dfs_rec(start, visited, dfs);
    return dfs; 
    
}

void printVector(vector<int>& v) {
    int n = v.size();
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int e;

    cout<<"Enter no. of vertices and edges: "<<endl;
    cin>>v>>e;
    graph.resize(v, list<int> ());

    cout<<"Enter the edges(u v) below: "<<endl;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);//for undirected
        // add_edge(s,d,false);//for directed
    }
    cout<<"Graph in the adjecency list: "<<endl;
    display();

    int startNode;
    cout<<"Enter the starting node: ";
    cin>>startNode;
    vector<int> ans = dfsOfGraph(startNode);
    cout<<"DFS Traversal of given Graph from node "<<startNode<<endl;
    printVector(ans);

    return 0;
}