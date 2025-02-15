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

void dfs(int node, vector<int>& visited){
    visited[node] = 1;
    for(auto lt : graph[node]) {
        if(!visited[lt]) dfs(lt, visited);
    }
}

int numberOfProvinces() {
    vector<int> visited(v,0);
    int count = 0;
    for(int i=0;i<v;i++) {
        if(visited[i]==0){
        count++;
        dfs(i,visited);
        }
    }
    return count;
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

    int ans = numberOfProvinces();
    cout<<ans;

    return 0;
}