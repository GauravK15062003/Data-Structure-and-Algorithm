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

bool dfsCheck(int node, vector<int>& vis, vector<int>& pathVis, vector<int>& check) {
    vis[node] = 1;
    pathVis[node] = 1;
    check[node] = 0;

    // traverse for adjacent nodes
    for(auto it : graph[node]) {
        // when the node is not visited
        if(!vis[it]) {
            if(dfsCheck(it, vis, pathVis, check) == true) {
                check[node] = 0;
                return true;
            }
        }
        // if the node has been previously visited
        // but it has to be visited on the same path
        else if(pathVis[it]) {
            check[node] = 0;
            return true;
        }
    }

    check[node] = 1;
    pathVis[node] = 0;
    return false; 
}

vector<int> eventualSafeState() {
    vector<int> vis(v, 0);
    vector<int> pathVis(v, 0);
    vector<int> check(v, 0);//for marking safe nodes
    vector<int> safeNodes;

    for(int i=0;i<v;i++) {
        if(!vis[i]) {
            dfsCheck(i, vis, pathVis, check);
        }
    }

    for(int i=0;i<v;i++) {
        if(check[i] == 1) safeNodes.push_back(i);
    }

    return safeNodes;
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

    vector<int> ans = eventualSafeState();
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}