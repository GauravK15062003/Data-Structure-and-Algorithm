#include<iostream>
#include<vector>
#include<list>
#include<stack>
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

void dfs(int node, vector<int>& vis, stack<int>& st) {
    vis[node] = 1;

    for(auto it : graph[node]) {
        if(!vis[it]) dfs(it, vis, st);
    }
    st.push(node);
}

vector<int> topoSort() {
    vector<int> vis(v, 0);
    stack<int> st;
    for(int i=0; i<v; i++) {
        if(!vis[i]) {
            dfs(i, vis, st);
        }
    }

    vector<int> ans;
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
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

    vector<int> res = topoSort();
    for(int i=0; i<res.size(); i++) {
        cout<<res[i]<<" ";
    }
    return 0;
}