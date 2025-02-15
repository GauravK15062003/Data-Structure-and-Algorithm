#include<iostream>
#include<vector>
#include<list>
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

bool dfsCheck(int node, vector<int>& vis, vector<int>& pathVis) {
    vis[node] = 1;
    pathVis[node] = 1;

    // traverse for ad jacent nodes
    for(auto it : graph[node]) {
        // when the node is not visited
        if(!vis[it]) {
            if(dfsCheck(it, vis, pathVis) == true) return true;
        }
        // if the node has been previously visited
        // but it has to be visited on the same path
        else if(pathVis[it]) {
            return true;
        }
    }

    pathVis[node] = 0;
    return false; 
}
bool isCyclic() {
    vector<int> vis(v, 0);
    vector<int> pathVis(v, 0);

    for(int i=0; i<v; i++) {
        if(!vis[i]) {
            if(dfsCheck(i, vis, pathVis) == true) return true;
        }
    }
}

int main(){
    cout<<"Enter no. of vertices: "<<endl;
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cout<<"Enter no. of edges: "<<endl;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        // add_edge(s,d);//for undirected
        add_edge(s,d,false);//for directed
    }
    cout<<"Graph in the for adjecency list: "<<endl;
    display();
    return 0;
}