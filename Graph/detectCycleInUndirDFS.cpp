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

bool dfs(int node, int parent, vector<int>& vis) {
    vis[node] = 1;

    for(auto adjNode : graph[node]) {
        if(!vis[adjNode]) {
            vis[adjNode] = 1;
            if(dfs(adjNode, node, vis)==true) return true;
            else if(adjNode != parent) return true;
        }
    }
    return false;
}

bool isCycle() {
    vector<int> vis(v,0);
    //for connected components
    for(int i=0;i<v;i++) {
        if(!vis[i]) {
            if(dfs(i, -1, vis) == true) return true;
        }
    }
    return false;
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
        add_edge(s,d);//for undirected
        // add_edge(s,d,false);//for directed
    }
    cout<<"Graph in the for adjecency list: "<<endl;
    display();

    bool ans = isCycle();
    cout<<ans;
   
    return 0;
}