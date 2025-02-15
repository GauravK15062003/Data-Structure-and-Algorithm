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
bool dfs(int node, int col, vector<int>& color) {
    color[node] = col;

    for(auto it : graph[node]) {
        if(color[it] == -1) {
            if(dfs(it, !col, color) == false) return false;
        }
        else if(color[it] == col) {
            return false;
        }
    }
    return true;
}

bool isBipartite() {
    vector<int> color(v, -1);

    //for multiple components of graph
    for(int i=0; i<v; i++) {
        if(color[i] == -1) {
            if(dfs(i, 0, color) == false) {
                return false;
            }
        }
    }
    return true;
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
    bool ans = isBipartite();
    cout<<ans;
    return 0;
}