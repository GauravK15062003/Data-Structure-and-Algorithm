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

vector<int> topoSort() {
    vector<int> indegree(v, 0);
    //traverse the adj_list
    for(int j = 0; j<v; j++) {
        for(auto lt : graph[j]) {
            indegree[lt]++;
        }
    }

    //push the node whose indegree is 0
    queue<int> q;
    for(int i=0; i<v; i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        //reduce the indegree of adjecent node of thet node
        for(auto it : graph[node]) {
            indegree[it]--;
            if(indegree[it] == 0) {
                q.push(it);
            }
        }
    }
    return topo;
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

    vector<int> ans = topoSort();

    for(int i=0; i<v; i++) {
        cout<<ans[i]<<" ";
    }

    return 0;
}